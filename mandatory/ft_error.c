/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:14:03 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 08:46:31 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(int *arr)
{
	if (arr)
		free(arr);
}

void	ft_error(t_stack *sta, t_stack *stb)
{
	ft_free_all(sta, stb);
	ft_putendl_fd("Error", 2);
	exit(0);
}
