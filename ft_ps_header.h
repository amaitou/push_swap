/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_header.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:38:45 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/25 10:16:25 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PS_HEADER_H
# define FT_PS_HEADER_H

/* Header Files */
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/* Stack */
typedef struct structure
{
	int	*arr;
	int	top;
	int	size;
}	t_stack;

t_stack ft_filler(int ac, char **ag, char c);
int		ft_atoi(const char *str);
void    ft_traversal(t_stack *st);
void	ft_putstr(char *str);
void	ft_swap(t_stack *st, char c);
void	ft_swap_both(t_stack *sta, t_stack *stb);
void	ft_push(t_stack *st1, t_stack *st2, char c);
void 	ft_rotate(t_stack *st, char c);
void	ft_rotate_both(t_stack *st1, t_stack *st2);
void	ft_reverse_rotate(t_stack *st, char c);
void	ft_reverse_rotate_both(t_stack *st1, t_stack *st2);
int		ft_find_min(t_stack *st);
void 	ft_two_nums(t_stack *st);
void	ft_three_nums(t_stack *st);
void	ft_four_nums(t_stack *sta, t_stack *stb);
void	ft_five_nums(t_stack *sta, t_stack *stb);


#endif