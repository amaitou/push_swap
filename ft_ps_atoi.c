/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:07:38 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/21 10:07:52 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ps_header.h"

static int	contain(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		++s;
	}
	return (0);
}

static int	spaces(char c)
{
	return (contain("\t\n\v\f\r ", c));
}

static int	signs(char c)
{
	return (contain("-+", c));
}

int	ft_atoi(const char *str)
{
	char	*p;
	int		s;
	int		r;

	p = (char *)str;
	s = 1;
	r = 0;
	while (spaces(*p))
		++p;
	if (signs(*p))
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