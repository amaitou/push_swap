/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:38:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/20 20:27:54 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* Header Files */
# include "../superlib/superlib.h"

typedef struct s_input
{
	int		ac;
	char	**ag;
}	t_input;

typedef struct s_structure
{
	int		*arr;
	int		*c_arr;
	int		top;
	int		size;
	char	*line;
	t_input	input;
}	t_stack;

// Struct Memebers Initialization
void	ft_struct_init(t_stack *sta, t_stack *stb, int ac, char **ag);

// Stack Parsing
void	ft_array_parse(t_stack *sta, t_stack *stb, char c);

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

// Checkers
long	ft_3atwa(char *p, t_stack *sta, t_stack *stb);
int		random_chars(char *s);
int		duplicates1(int *arr, int size);
int		duplicates2(char **p);
int		ft_check_sort_1(t_stack *sta);
int		ft_check_sort_2(t_stack *sta);

// Stack Error
void	ft_error(t_stack *sta, t_stack *stb);

// Free Stack
void	ft_free_all(t_stack *sta, t_stack *stb);

#endif
