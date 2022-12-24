/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_rules_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:25:45 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/21 11:33:06 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

void ft_reverse_rotate(t_stack *st, char c)
{
    int t;
    int i;
    if (st->size <= 1)
        return ;
    t = st->arr[0];
    i = 0;
    while (i < st->top)
    {
        st->arr[i] = st->arr[i + 1];
        ++i;
    }
    st->arr[i] = t;
    if (c == 'a')
        ft_putstr("rra");
    else if(c == 'b')
        ft_putstr("rrb");
    else
        return ;
}

void ft_reverse_rotate_both(t_stack *st1, t_stack *st2)
{
    ft_reverse_rotate(st1, 'r');
    ft_reverse_rotate(st2, 'r');
    ft_putstr("rrr");
}