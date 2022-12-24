/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_filler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:41:17 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/21 10:20:01 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

t_stack ft_filler(int ac, char **ag, char c)
{
    t_stack st;
    int	i;
	int	j;

    st.arr = malloc(sizeof(int) * (ac - 1));
    if (!st.arr)
        free(st.arr);
    st.size = 0;
    st.top = -1;
    j = ac - 2;
	i = 1;
    if (c == 'a')
	{
		while (i < ac) 
		{
        	st.arr[j] = ft_atoi(ag[i]);
			st.size++;
			st.top++;
			++i;
			j--;
    	}
	}
    return (st);
}