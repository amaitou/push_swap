/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:10:11 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/12 12:46:17 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_duplicates(t_stack *st)
{
	int	i;
	int	j;

	i = 0;
	while (i < st->size)
	{
		j = i + 1;
		while (j < st->size)
		{
			if (st->arr[i] == st->arr[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int check_range(t_stack *st)
{
	int	i;

	i = 0;
	while (i < st->size)
	{
		if (st->arr[i] >= INT_MAX || st->arr[i] <= INT_MIN)
			return (0);
		++i;
	}
	return (1);
}