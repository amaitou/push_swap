/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 23:29:07 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/21 23:29:27 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

int ft_find_min(t_stack *st)
{
    int t;
    int i;

    i = 0;
    t = st->arr[0];
    while (i < st->size)
    {
        if (t > st->arr[i])
            t = st->arr[i];
        ++i;
    }
    return (t);
}