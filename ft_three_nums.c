/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:56:25 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/21 22:10:33 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

void ft_three_nums(t_stack *st)
{
    int top;
    int middle;
    int bottom;

    top = st->arr[2];
    middle = st->arr[1];
    bottom = st->arr[0];
    if (top > middle && middle < bottom && bottom > top)
        ft_swap(st, 'a');
    else if (top > middle && middle > bottom && bottom < top)
    {
        ft_swap(st, 'a');
        ft_reverse_rotate(st, 'a');
    }
    else if (top > middle && middle < bottom && bottom < top)
        ft_rotate(st, 'a');
    else if (top < middle && middle > bottom && bottom > top)
    {
        ft_swap(st, 'a');
        ft_rotate(st, 'a');
    }
    else if (top < middle && middle > bottom && bottom < top)
        ft_reverse_rotate(st, 'a');
    else
        return ;
}