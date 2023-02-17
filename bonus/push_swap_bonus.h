/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:38:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/17 18:55:51 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

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
	int		len;
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

// Checker Functions
void	first_checker(t_stack *sta, t_stack *stb, char *instruction);
void	second_checker(t_stack *sta, t_stack *stb, char *instruction);

#endif
