/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:38:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 07:21:41 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Header Files */
# include "./superlib/superlib.h"

typedef struct s_input
{
	int		ac;
	char	**ag;
}	t_input;

typedef struct s_structure
{
	int		*arr;
	int		*c_arr;
	int		len;
	int		top;
	int		size;
	char	*line;
	t_input	input;
}	t_stack;

// Stack Parsing
void	ft_array_parse(t_stack *st, char c);

// Stack Rules
void	ft_swap(t_stack *st, char c);
void	ft_swap_both(t_stack *sta, t_stack *stb);
void	ft_push(t_stack *st1, t_stack *st2, char c);
void	ft_rotate(t_stack *st, char c);
void	ft_rotate_both(t_stack *st1, t_stack *st2);
void	ft_reverse_rotate(t_stack *st, char c);
void	ft_reverse_rotate_both(t_stack *st1, t_stack *st2);

// Program Helpers
int		ft_find_min(t_stack *st);
int		ft_find_value_by_index(int value, t_stack *st, int *arr);
int		ft_find_max(t_stack *st);
void	ft_five_nums_helper(t_stack *sta, t_stack *stb);

// Algorithms
void	ft_two_nums(t_stack *st);
void	ft_three_nums(t_stack *st);
void	ft_four_nums(t_stack *sta, t_stack *stb);
void	ft_five_nums(t_stack *sta, t_stack *stb);
void	ft_stack_big_range(t_stack *sta, t_stack *stb, int start, int end);
void	ft_stack_reverse(t_stack *sta, t_stack *stb);
void	ft_perform_all(t_stack *sta, t_stack *stb);

// Stack Sorting
void	bubble_sort(t_stack *st);

// Stack Traversal
void	ft_traverse(t_stack *st, int *arr);

// Checkers
long	ft_3atwa(char *p);
int		random_chars(char *s);
int		weird_zero(char *s);
int		duplicates1(int *arr, int size);
int		duplicates2(char **p);
int		out_of_range(int *arr, int size);
int		ft_check_sort_1(t_stack *sta);
int		ft_check_sort_2(t_stack *sta);

// Stack Error
void	ft_error(t_stack *sta, t_stack *stb);

// Free Stack
void	ft_free_all(t_stack *sta, t_stack *stb);

#endif