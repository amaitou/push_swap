/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_rules_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:25:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/18 06:52:33 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_reverse_rotate(t_stack *st, char c)
{
	int	t;
	int	i;

	(void)c;
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
}

void	ft_reverse_rotate_both(t_stack *st1, t_stack *st2)
{
	ft_reverse_rotate(st1, 'r');
	ft_reverse_rotate(st2, 'r');
}
