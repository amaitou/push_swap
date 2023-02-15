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
		 ft_atoi_based.c \
		 ft_error.c \
		 ft_stack_perform_1.c \
		 ft_stack_perform_2.c \
		 ft_utils.c

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