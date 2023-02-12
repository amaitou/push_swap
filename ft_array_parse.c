/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:41:17 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/12 06:28:41 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

static char	*read_args(int ac, char **ag)
{
	int	i;
	char *line;

	i = 1;
	line = (void *)0;
	while (i < ac)
	{
		line = string_join(line, ag[i]);
		line = string_join(line, " ");
		++i;
	}
	return (line);
}

static int array_size(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		++i;
	return(i);
}

void	ft_array_parse(t_stack *st, int ac, char **ag, char c)
{
	char	*line;
	char	**p;
	int		i;
	int		j;
	int		k;
	
	line = read_args(ac, ag);
	p = ft_split(line, ' ');
	j = array_size(p) - 1;
	k = j;
	st->arr = (int *)malloc(sizeof(int) * j);
	st->size = 0;
	st->top = -1;
	i = 0;
	if (c == 'a')
	{
		while (i <= j)
		{
			st->arr[i] = ft_atoi(p[k]);
			st->top++;
			st->size++;
			--k;
			++i;	
		}
	}
}
