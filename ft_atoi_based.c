/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_based.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:37:46 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/15 18:40:25 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static int	ft_random(char *s)
{
	if ((*s == '-' || *s == '+') && *(s + 1))
		++s;
	while ((*s >= '0' && *s <= '9') && *s)
		++s;
	if (*s)
		return (0);
	return (1);
}

int	ft_atoi_based(t_stack *st, const char *str)
{
	char	*p;
	int		s;
	int		r;

	p = (char *)str;
	if (ft_random(p))
	{
		s = 1;
		r = 0;
		while (spaces(*p))
			++p;
		if (signs(*p))
		{
			if (*p == '-' && *(p + 1) == '0' && !*(p + 2))
				ft_error(st);
			else if (*p == '-')
			{
				s *= -1;
				++p;
			}
			else if (*p == '+')
			{
				s *= 1;
				++p;
			}
		}
		while (*p >= '0' && *p <= '9')
		{
			r = r * 10 + *p - 48;
			++p;
		}	
	}
	else
		ft_error(st);
	return (r * s);
}
