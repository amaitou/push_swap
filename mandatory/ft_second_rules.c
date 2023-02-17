/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:25:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/15 17:32:42 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack *st, char c)
{
	int	t;
	int	i;

	if (st->size <= 1)
		return ;
	t = st->arr[0];
	i = 0;
	while (i < st->top)
	{
		st->arr[i] = st->arr[i + 1];
		++i;
	}
	st->arr[i] = t;
	if (c == 'a')
		ft_putendl_fd("rra", 1);
	else if (c == 'b')
		ft_putendl_fd("rrb", 1);
	else
		return ;
}

void	ft_reverse_rotate_both(t_stack *st1, t_stack *st2)
{
	ft_reverse_rotate(st1, 'r');
	ft_reverse_rotate(st2, 'r');
	ft_putendl_fd("rrr", 1);
}
