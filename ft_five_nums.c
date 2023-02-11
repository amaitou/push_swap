/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_nums.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:30:04 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/11 19:33:12 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

void	ft_five_nums(t_stack *sta, t_stack *stb)
{
	while (sta->arr[sta->top] != ft_find_min(sta))
		ft_rotate(sta, 'a');
	ft_push(sta, stb, 'b');
	ft_four_nums(sta, stb);
	ft_push(stb, sta, 'a');
}
