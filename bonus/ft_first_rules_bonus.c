/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_rules_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:24:50 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/18 06:52:09 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_swap(t_stack *st, char c)
{
	int	temp;

	(void)c;
	if (st->size <= 1)
		return ;
	temp = st->arr[st->top];
	st->arr[st->top] = st->arr[st->top - 1];
	st->arr[st->top - 1] = temp;
}

void	ft_swap_both(t_stack *sta, t_stack *stb)
{
	ft_swap(sta, 's');
	ft_swap(stb, 's');
}

void	ft_push(t_stack *st1, t_stack *st2, char c)
{
	(void)c;
	if (st1->size <= 0)
		return ;
	st2->arr[st2->size] = st1->arr[st1->top];
	st1->size--;
	st1->top--;
	st2->size++;
	st2->top++;
}

void	ft_rotate(t_stack *st, char c)
{
	int	t;
	int	i;

	(void)c;
	if (st->size <= 1)
		return ;
	t = st->arr[st->top];
	i = st->size;
	while (i)
	{
		st->arr[i] = st->arr[i - 1];
		--i;
	}
	st->arr[i] = t;
}

void	ft_rotate_both(t_stack *st1, t_stack *st2)
{
	ft_rotate(st1, 'r');
	ft_rotate(st2, 'r');
}
