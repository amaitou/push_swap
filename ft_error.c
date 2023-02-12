/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:14:03 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/12 12:34:53 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

// static void free_array(t_stack *st)
// {
// 	int i;

// 	i = 0;
// 	while (i < st->size)
// 	{
// 		free(&st->arr[i]);
// 		free(&st->c_arr[i]);
// 		++i;
// 	}
// 	free(st->arr);
// 	free(st->c_arr);
// }

void ft_error(t_stack *st)
{
	(void)st;
	ft_putendl_fd("Error", 2);
	// free_array(st);
	exit(0);
}