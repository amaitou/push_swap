/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_perform_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:32:46 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/16 05:35:57 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_two_nums(t_stack *st)
{
	int	first;
	int	second;

	first = st->arr[0];
	second = st->arr[1];
	if (first < second)
		ft_swap(st, 'a');
	else
		return ;
}

void	ft_three_nums(t_stack *st)
{
	int	top;
	int	middle;
	int	bottom;

	top = st->arr[2];
	middle = st->arr[1];
	bottom = st->arr[0];
	if (top > middle && middle < bottom && bottom > top)
		ft_swap(st, 'a');
	else if (top > middle && middle > bottom && bottom < top)
	{
		ft_swap(st, 'a');
		ft_reverse_rotate(st, 'a');
	}
	else if (top > middle && middle < bottom && bottom < top)
		ft_rotate(st, 'a');
	else if (top < middle && middle > bottom && bottom > top)
	{
		ft_swap(st, 'a');
		ft_rotate(st, 'a');
	}
	else if (top < middle && middle > bottom && bottom < top)
		ft_reverse_rotate(st, 'a');
	else
		return ;
}

void	ft_four_nums(t_stack *sta, t_stack *stb)
{
	while (sta->arr[sta->top] != ft_find_min(sta))
		ft_rotate(sta, 'a');
	ft_push(sta, stb, 'b');
	ft_three_nums(sta);
	ft_push(stb, sta, 'a');
}

void	ft_five_nums(t_stack *sta, t_stack *stb)
{
	ft_five_nums_helper(sta, stb);
	ft_push(sta, stb, 'b');
	ft_three_nums(sta);
	ft_push(stb, sta, 'a');
	ft_push(stb, sta, 'a');
}
