/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perform_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:40:51 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/15 18:46:38 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_perform_all(t_stack *sta, t_stack *stb)
{
	if (sta->size == 2)
		ft_two_nums(sta);
	else if (sta->size == 3)
		ft_three_nums(sta);
	else if (sta->size == 4)
		ft_four_nums(sta, stb);
	else if (sta->size == 5)
		ft_five_nums(sta, stb);
	else if (sta->size > 5 && sta->size <= 100)
		ft_stack_big_range(sta, stb, 0, 15);
	else if (sta->size > 100)
		ft_stack_big_range(sta, stb, 0, 30);
}
