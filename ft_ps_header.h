/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps_header.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 09:38:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/02/12 06:57:25 by amait-ou         ###   ########.fr       */
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

// Copy array
void copy_stack(t_stack *st);

// Nums Algorithms
void	ft_two_nums(t_stack *st);
void	ft_three_nums(t_stack *st);
void	ft_four_nums(t_stack *sta, t_stack *stb);
void	ft_five_nums(t_stack *sta, t_stack *stb);

// Array Sorting
void bubble_sort(t_stack *st);

// Array Traversal
void	ft_traverse(t_stack *st);
#endif