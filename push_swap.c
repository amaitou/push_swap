/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:37:43 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/16 13:14:31 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **ag)
{
	t_stack	sta;
	t_stack	stb;

	if (ac >= 2)
	{
		sta.input.ac = ac;
		sta.input.ag = ag;
		stb.input.ac = ac;
		stb.input.ag = ag;
		ft_array_parse(&sta, 'a');
		ft_array_parse(&stb, 'b');
		bubble_sort(&sta);
		ft_perform_all(&sta, &stb);
	}
	return (0);
}
