/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_perform_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 04:26:21 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 20:34:08 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_a(t_stack *sta, t_stack *stb)
{
	while (stb->size)
		ft_push(stb, sta, 'a');
}

static void	ft_push_b(t_stack *sta, t_stack *stb)
{
	while (sta->size)
	{
		ft_push(sta, stb, 'b');
		ft_rotate(stb, 'b');
	}
}

void	ft_stack_reverse(t_stack *sta, t_stack *stb)
{
	ft_push_b(sta, stb);
	ft_push_a(sta, stb);
}
