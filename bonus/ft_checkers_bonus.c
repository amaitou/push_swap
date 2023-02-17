/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkers_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:10:11 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 17:20:27 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	random_chars(char *s)
{
	if (*s == '-' || *s == '+')
		++s;
	if (!*s)
		return (1);
	while (*s)
	{
		if (!ft_isdigit(*s))
			return (1);
		++s;
	}
	return (0);
}

int	duplicates1(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int	duplicates2(char **p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (p[i])
	{
		j = i + 1;
		while (p[j])
		{
			if (ft_strcmp(p[i], p[j]) == 0)
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}
