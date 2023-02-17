/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:48 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 18:53:11 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	first_checker(t_stack *sta, t_stack *stb, char *instruction)
{
	if (ft_strcmp(instruction, "sa\n") == 0)
		ft_swap(sta, 'a');
	else if (ft_strcmp(instruction, "sb\n") == 0)
		ft_swap(stb, 'b');
	else if (ft_strcmp(instruction, "ss\n") == 0)
		ft_swap_both(sta, stb);
	else if (ft_strcmp(instruction, "pa\n") == 0)
		ft_push(stb, sta, 'a');
	else if (ft_strcmp(instruction, "pb\n") == 0)
		ft_push(sta, stb, 'b');
	else if (ft_strcmp(instruction, "ra\n") == 0)
		ft_rotate(sta, 'a');
	else if (ft_strcmp(instruction, "rb\n") == 0)
		ft_rotate(stb, 'b');
	else if (ft_strcmp(instruction, "rr\n") == 0)
		ft_rotate_both(sta, stb);
}

void	second_checker(t_stack *sta, t_stack *stb, char *instruction)
{
	if (ft_strcmp(instruction, "rra\n") == 0)
		ft_reverse_rotate(sta, 'a');
	else if (ft_strcmp(instruction, "rrb\n") == 0)
		ft_reverse_rotate(stb, 'b');
	else if (ft_strcmp(instruction, "rrr\n") == 0)
		ft_reverse_rotate_both(sta, stb);
}
