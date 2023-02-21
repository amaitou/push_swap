/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 08:48:23 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 19:35:01 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	valid_instruction(char *line)
{
	if (!ft_strcmp(line, "sa\n")
		|| !ft_strcmp(line, "sb\n")
		|| !ft_strcmp(line, "ss\n")
		|| !ft_strcmp(line, "pa\n")
		|| !ft_strcmp(line, "pb\n")
		|| !ft_strcmp(line, "ra\n")
		|| !ft_strcmp(line, "rb\n")
		|| !ft_strcmp(line, "rr\n")
		|| !ft_strcmp(line, "rra\n")
		|| !ft_strcmp(line, "rrb\n")
		|| !ft_strcmp(line, "rrr\n"))
		return (1);
	return (0);
}

static void	stack_perform_1(char *line, t_stack *sta, t_stack *stb)
{
	if (!ft_strcmp(line, "sa\n"))
		ft_swap(sta, 'a');
	else if (!ft_strcmp(line, "sb\n"))
		ft_swap(stb, 'b');
	else if (!ft_strcmp(line, "ss\n"))
		ft_swap_both(sta, stb);
	else if (!ft_strcmp(line, "pa\n"))
		ft_push(stb, sta, 'a');
	else if (!ft_strcmp(line, "pb\n"))
		ft_push(sta, stb, 'b');
	else if (!ft_strcmp(line, "ra\n"))
		ft_rotate(sta, 'a');
}

static void	stack_perform_2(char *line, t_stack *sta, t_stack *stb)
{
	if (!ft_strcmp(line, "rb\n"))
		ft_rotate(stb, 'b');
	else if (!ft_strcmp(line, "rr\n"))
		ft_rotate_both(sta, stb);
	else if (!ft_strcmp(line, "rra\n"))
		ft_reverse_rotate(sta, 'a');
	else if (!ft_strcmp(line, "rrb\n"))
		ft_reverse_rotate(stb, 'b');
	else if (!ft_strcmp(line, "rrr\n"))
		ft_reverse_rotate_both(sta, stb);
}

static void	is_sorted(t_stack *sta, t_stack *stb)
{
	if (ft_check_sort_1(sta) && !stb->size)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	ft_free_all(sta, stb);
}

int	main(int ac, char **ag)
{
	t_stack	sta;
	t_stack	stb;
	char	*line;

	if (ac >= 2)
	{
		ft_struct_init(&sta, &stb, ac, ag);
		ft_array_parse(&sta, &stb, 'a');
		stb.arr = (int *)malloc(sizeof(int) * sta.size);
		if (duplicates1(sta.arr, sta.size))
			ft_error(&sta, &stb);
		line = get_next_line(0);
		while (line)
		{
			if (valid_instruction(line))
			{
				stack_perform_1(line, &sta, &stb);
				stack_perform_2(line, &sta, &stb);
			}
			else
				ft_error(&sta, &stb);
			line = get_next_line(0);
		}
		is_sorted(&sta, &stb);
	}
}
