/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:37:43 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 21:18:33 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **ag)
{
	t_stack	sta;
	t_stack	stb;

	if (ac >= 2)
	{
		ft_struct_init(&sta, &stb, ac, ag);
		ft_array_parse(&sta, &stb, 'a');
		stb.arr = (int *)malloc(sizeof(int) * sta.size);
		if (duplicates1(sta.arr, sta.size))
			ft_error(&sta, &stb);
		bubble_sort(&sta);
		ft_perform_all(&sta, &stb);
	}
	return (0);
}
