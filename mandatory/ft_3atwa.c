/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3atwa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:37:46 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 20:16:39 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_3atwa(char *p, t_stack *sta, t_stack *stb)
{
	int		s;
	long	r;

	s = 1;
	r = 0;
	while (*p == ' ' || *p == '\n' || *p == '\t' || *p == '\v' || *p == '\f'
		|| *p == '\r')
		++p;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			s *= -1;
		++p;
	}
	while (*p >= '0' && *p <= '9')
	{
		r = r * 10 + *p - 48;
		++p;
	}
	if (s * r > INT_MAX || s * r < INT_MIN)
		ft_error(sta, stb);
	return (r * s);
}
