/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_based.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:37:46 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/16 13:07:28 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static	int	valid_number(char *s)
// {
// 	return (random_chars(s) || weird_zero(s));
// }

long	ft_3atwa(char *p)
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
	return (r * s);
}
