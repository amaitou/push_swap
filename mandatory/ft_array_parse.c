/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:41:17 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 14:03:17 by amait-ou         ###   ########.fr       */
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

static void	checks(char *s, char **p, t_stack *sta, t_stack *stb)
{
	if (duplicates2(p) || random_chars(s))
		ft_error(sta, stb);
}

void	ft_array_parse(t_stack *sta, t_stack *stb, char c)
{
	char	*line;
	char	**p;
	int		i;
	int		k;

	line = read_args(sta);
	p = ft_split(line, ' ');
	k = array_size(p) - 1;
	sta->arr = (int *)malloc(sizeof(int) * array_size(p));
	sta->size = 0;
	sta->top = -1;
	i = 0;
	if (c == 'a')
	{
		while (i < array_size(p))
		{
			checks(p[k], p, sta, stb);
			sta->arr[i] = ft_3atwa(p[k], sta, stb);
			sta->top++;
			sta->size++;
			--k;
			++i;
		}
	}
}
