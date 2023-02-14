/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:38:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/14 13:07:55 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PS_HEADER_H
# define FT_PS_HEADER_H

/* Header Files */
# include "./superlib/superlib.h"
typedef struct s_structure
{
	int	*arr;
	int	*c_arr;
	int	len;
	int	top;
	int	size;
}	t_stack;

// Array Parsing
void	ft_array_parse(t_stack *st, int ac, char **ag, char c);

// Program Rules
void	ft_swap(t_stack *st, char c);
void	ft_swap_both(t_stack *sta, t_stack *stb);
void	ft_push(t_stack *st1, t_stack *st2, char c);
void	ft_rotate(t_stack *st, char c);
void	ft_rotate_both(t_stack *st1, t_stack *st2);
void	ft_reverse_rotate(t_stack *st, char c);
void	ft_reverse_rotate_both(t_stack *st1, t_stack *st2);

// Program Helpers
int		ft_find_min(t_stack *st);
int		ft_find_min_index(t_stack *st);
int 	ft_find_value_by_index(int value, t_stack *st, int *arr);

// Nums Algorithms
void	ft_two_nums(t_stack *st);
void	ft_three_nums(t_stack *st);
void	ft_four_nums(t_stack *sta, t_stack *stb);
void	ft_five_nums(t_stack *sta, t_stack *stb);
void	pusher(t_stack *sta, t_stack *stb, int start, int end);
void	puller(t_stack *sta, t_stack *stb);
int		ft_find_max(t_stack *st);

// Array Sorting
void bubble_sort(t_stack *st);

// Array Traversal
void	ft_traverse(t_stack *st, int *arr);

// Checkers
int 	check_duplicates(t_stack *st);
int 	check_range(t_stack *st);
int		ft_a2i(t_stack *st, const char *str);

// Array Error
void ft_error(t_stack *st);

#endif