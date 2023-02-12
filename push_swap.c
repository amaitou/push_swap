/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:37:43 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/12 06:37:00 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

int	main(int ac, char **ag)
{
	t_stack	sta;
	t_stack	stb;
	int i = 0;
	ft_array_parse(&sta, ac, ag, 'a');
	ft_swap(&sta, 'a');
	ft_array_parse(&stb, ac, ag, 'b');
	if (sta.size == 2)
		ft_two_nums(&sta);
	else if (sta.size == 3)
		ft_three_nums(&sta);
	else if (sta.size == 4)
		ft_four_nums(&sta, &stb);
	else if (sta.size == 5)
		ft_five_nums(&sta, &stb);
	return (0);
}
