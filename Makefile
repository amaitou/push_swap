# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 17:33:16 by amait-ou          #+#    #+#              #
#    Updated: 2023/02/17 07:25:56 by amait-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wextra -Werror -Werror
NAME = push_swap
CFILES = push_swap.c \
		 ft_first_rules.c \
		 ft_second_rules.c \
		 ft_array_parse.c \
		 ft_traverse.c \
		 ft_bubble_sort.c \
		 ft_checkers.c \
		 ft_3atwa.c \
		 ft_error.c \
		 ft_stack_perform_1.c \
		 ft_stack_perform_2.c \
		 ft_stack_perform_3.c \
		 ft_utils.c \
		 ft_perform_all.c \
		 ft_check_sort.c \
		 ft_free_stack.c

SUPERLIB_DIR = ./superlib
SUPERLIB = ./superlib/superlib.a

all : $(SUPERLIB) $(NAME) $(CFILES)

$(SUPERLIB):
	@$(MAKE) -C $(SUPERLIB_DIR)

$(NAME): $(CFILES)
	$(CC) $(CFLAGS) $? $(SUPERLIB) -o $@

clean:
	@$(MAKE) fclean -C $(SUPERLIB_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re