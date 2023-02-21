/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_perform_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:27:40 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 20:34:49 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_a(t_stack *sta, t_stack *stb)
{
	int	middle;
	int	index;
	int	max;

	while (stb->size)
	{
		middle = (stb->size / 2);
		max = ft_find_max(stb);
		index = ft_find_value_by_index(max, stb, stb->arr);
		if (index <= middle)
		{
			while (stb->arr[stb->top] != max)
				ft_reverse_rotate(stb, 'b');
		}
		else
		{
			while (stb->arr[stb->top] != max)
				ft_rotate(stb, 'b');
		}
		ft_push(stb, sta, 'a');
	}
}

static void	ft_push_b(t_stack *sta, t_stack *stb, int start, int end)
{
	int	m;
	int	t;
	int	c;

	while (sta->size)
	{
		t = sta->arr[sta->top];
		if (t <= sta->c_arr[start])
		{
			ft_push(sta, stb, 'b');
			ft_rotate(stb, 'b');
			end++;
			start++;
		}
		else if (t > sta->c_arr[start] && t < sta->c_arr[end])
		{
			ft_push(sta, stb, 'b');
			start++;
			end++;
		}
		else if (t >= sta->c_arr[end])
		{
			ft_rotate(sta, 'a');
		}
	}
}

void	ft_stack_big_range(t_stack *sta, t_stack *stb, int start, int end)
{
	ft_push_b(sta, stb, start, end);
	ft_push_a(sta, stb);
}
