/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:37:43 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 10:40:51 by amait-ou         ###   ########.fr       */
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
		ft_array_parse(&stb, &sta, 'b');
		bubble_sort(&sta);
		if (duplicates1(sta.arr, sta.size))
			ft_error(&sta, &stb);
		ft_perform_all(&sta, &stb);
	}
	return (0);
}
