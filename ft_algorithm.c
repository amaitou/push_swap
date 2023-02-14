/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 04:27:40 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/14 22:10:53 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	puller(t_stack *sta, t_stack *stb)
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

void	pusher(t_stack *sta, t_stack *stb, int start, int end)
{
	int	m;
	int	t;
	int	c;

	// (void)sta;
	// (void)stb;
	// (void)start;
	// (void)end;
	// ft_traverse(sta, sta->arr);
	// ft_traverse(sta, sta->arr);
	// ft_traverse(sta, sta->c_arr);
	// ft_printf("size -> %d", sta->size);
	// exit(0);
	//ft_traverse(sta, sta->c_arr);
	while (sta->top)
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
	puller(sta, stb);
}