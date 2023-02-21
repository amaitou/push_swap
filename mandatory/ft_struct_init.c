/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:38:10 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 18:09:06 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_struct_init(t_stack *sta, t_stack *stb, int ac, char **ag)
{
	sta->input.ac = ac;
	sta->input.ag = ag;
	stb->input.ac = ac;
	stb->input.ag = ag;
	sta->arr = NULL;
	stb->arr = NULL;
	sta->c_arr = NULL;
	stb->c_arr = NULL;
	if (sta->size > 0 && sta->top > -1)
	{
		stb->top = -1;
		stb->size = 0;
	}
	else
	{
		sta->size = 0;
		sta->top = -1;
		stb->size = 0;
		stb->top = -1;
	}
}
