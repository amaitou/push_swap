/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_nums.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:42:01 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/22 12:46:52 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

void ft_two_nums(t_stack *st)
{
    int first;
    int second;
    
    first = st->arr[0];
    second = st->arr[1];
    if (first < second)
        ft_swap(st,'a');
    else
        return;
}