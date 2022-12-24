/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:37:43 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/23 18:41:26 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

int main(int ac, char **ag)
{
    t_stack sta;
    t_stack stb;
    int i;
    i = 0;
    sta = ft_filler(ac, ag, 'a');
    stb = ft_filler(ac, ag, 'b');
    if (sta.size == 2)
    {
        ft_two_nums(&sta);
    }
    else if (sta.size == 3)
    {
        ft_three_nums(&sta);
        free(stb.arr);
    }
    else if (sta.size == 4)
    {
        ft_four_nums(&sta, &stb);
        free(stb.arr);
    }
    else if (sta.size == 5)
    {
       ft_five_nums(&sta, &stb);
       free(stb.arr);
    }
    // ft_traversal(&sta);
    // ft_traversal(&stb);
    return (0);
}