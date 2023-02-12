/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a2i.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:37:46 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/12 12:07:45 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_edited_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:36:56 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/12 09:37:15 by amait-ou         ###   ########.fr       */
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

static int	ft_random(char *s)
{
	if (*s == '-' || *s == '+')
		++s;
	while ((*s >= '0' && *s <= '9') && *s)
		++s;
	if (*s)
		return (0);
	return (1);
}

int	ft_a2i(const char *str)
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
			if (*p == '-')
			{
				s *= -1;
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
	{
		ft_putendl_fd("Error", 1);
		exit(0);
	}

	return (r * s);
}