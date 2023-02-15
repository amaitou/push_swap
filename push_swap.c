/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:37:43 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/14 13:33:23 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **ag)
{
	t_stack	sta;
	t_stack	stb;

	if (ac >= 2)
	{
		ft_array_parse(&sta, ac, ag, 'a');
		ft_array_parse(&stb, ac, ag, 'b');
		bubble_sort(&sta);
		if (!check_duplicates(&sta))
			ft_error(&sta);
		if (!check_range(&sta))
			ft_error(&sta);
		if (sta.size == 2)
			ft_two_nums(&sta);
		else if (sta.size == 3)
			ft_three_nums(&sta);
		else if (sta.size == 4)
			ft_four_nums(&sta, &stb);
		else if (sta.size == 5)
			ft_five_nums(&sta, &stb);
		else if (sta.size == 100)
			ft_stack_big_range(&sta, &stb, 0, 15);
		else if (sta.size == 500)
			ft_stack_big_range(&sta, &stb, 0, 30);
	}
	return (0);
}
