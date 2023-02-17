/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 04:52:15 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 16:41:36 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_check_sort_1(t_stack *sta)
{
	int	i;

	i = sta->size - 1;
	while (i)
	{
		if (!(sta->arr[i] < sta->arr[i - 1]))
			return (0);
		--i;
	}
	return (1);
}

int	ft_check_sort_2(t_stack *sta)
{
	int	i;

	i = sta->size - 1;
	while (i)
	{
		if (!(sta->arr[i] > sta->arr[i - 1]))
			return (0);
		--i;
	}
	return (1);
}
