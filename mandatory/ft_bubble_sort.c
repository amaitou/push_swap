/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 00:16:33 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 20:27:22 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	copy_stack(t_stack *st)
{
	int	*p;
	int	i;

	i = 0;
	st->c_arr = (int *)malloc(sizeof(int) * st->size);
	if (!st->c_arr)
		return ;
	while (i < st->size)
	{
		st->c_arr[i] = st->arr[i];
		++i;
	}
}

void	bubble_sort(t_stack *st)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	copy_stack(st);
	while (i < st->size)
	{
		j = i + 1;
		while (j < st->size)
		{
			if (st->c_arr[i] > st->c_arr[j])
			{
				t = st->c_arr[i];
				st->c_arr[i] = st->c_arr[j];
				st->c_arr[j] = t;
			}
			++j;
		}
		++i;
	}
}
