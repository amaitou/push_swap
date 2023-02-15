/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:37:43 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/15 18:47:26 by amait-ou         ###   ########.fr       */
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
		ft_perform_all(&sta, &stb);
	}
	return (0);
}
