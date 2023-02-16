/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:41:17 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/16 13:11:50 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*read_args(t_stack *st)
{
	int		i;
	char	*line;

	i = 1;
	line = (void *)0;
	while (i < st->input.ac)
	{
		line = string_join(line, st->input.ag[i]);
		line = string_join(line, " ");
		++i;
	}
	return (line);
}

static int	array_size(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		++i;
	return (i);
}

void	ft_array_parse(t_stack *st, char c)
{
	char	*line;
	char	**p;
	int		i;
	int		k;
	int		size;

	line = read_args(st);
	p = ft_split(line, ' ');
	size = array_size(p);
	k = size - 1;
	st->arr = (int *)malloc(sizeof(int) * size);
	st->size = 0;
	st->top = -1;
	i = 0;
	if (c == 'a')
	{
		while (i < size)
		{
			st->arr[i] = ft_3atwa(p[k]);
			st->top++;
			st->size++;
			--k;
			++i;
		}
	}
}
