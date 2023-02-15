/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:29:07 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/15 18:38:48 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_stack *st)
{
	int	t;
	int	i;

	i = 0;
	t = st->arr[0];
	while (i < st->size)
	{
		if (t > st->arr[i])
			t = st->arr[i];
		++i;
	}
	return (t);
}

int	ft_find_max(t_stack *st)
{
	int	t;
	int	i;

	i = 0;
	t = st->arr[0];
	while (i < st->size)
	{
		if (t < st->arr[i])
			t = st->arr[i];
		++i;
	}
	return (t);
}

int	ft_find_value_by_index(int value, t_stack *st, int *arr)
{
	int	i;

	i = 0;
	while (i < st->size)
	{
		if (value == arr[i])
			return (i);
		++i;
	}
	return (i);
}
