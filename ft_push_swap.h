/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:09:01 by amait-ou          #+#    #+#             */
/*   Updated: 2022/12/20 06:47:38 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

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

/* First Collection of Actions (ft_actions_1.c) */
void	__ft_sa(t_stack *st, char c);
void	__ft_sb(t_stack *st);
void	__ft_ss(t_stack *st1, t_stack *st2);
void	__ft_pa(t_stack *st1, t_stack *st2, char c);
void	__ft_pb(t_stack *st1, t_stack *st2);

/* Second Collection of Actions (ft_actions_2.c) */
void	__ft_ra(t_stack *st, char c);
void	__ft_rb(t_stack *st);
void	__ft_rr(t_stack *st1, t_stack *st2);
void	__ft_rra(t_stack *st, char c);
void	__ft_rrb(t_stack *st);

/* Third Collection of Actions (ft_actions_3.c) */
void    __ft_rrr(t_stack *st1, t_stack *st2);

/* Second Collection of Actions (ft_utils.c) */
void	__ft_putstr(char *s);
int		__ft_validator(int ac, char **ag);
int		__ft_atoi(char *n);
int		__ft_duplicate(int ac, char **ag);
void 	__ft_error();
int		__ft_is_sorted(int ac, char **ag, t_stack *st1);

/* ft_helpers_1.c */
int		__ft_contain(char *s, char c);
int		__ft_spaces(char c);
int		__ft_signs(char c);
void	__ft_filler(int ac, char **ag, t_stack *st, char c);

/* ft_helpers_2.c */
int 	__ft_find_min(t_stack *st);
int		__ft_index_min(t_stack *st);
void    __five_num_checker(t_stack *st1, t_stack *st2);

/* Bubble Sort (ft_bubble_sort.c) */
t_stack	__ft_bubble_sort(int ac, char **ag);

/* ft_logic.c */
void	__three_num_algo(t_stack *sta);
void	__five_num_algo(t_stack *st1, t_stack *st2);

#endif
