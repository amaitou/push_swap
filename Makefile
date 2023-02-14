CC = cc
CFLAGS = -Wextra -Werror -Werror
NAME = push_swap
CFILES = push_swap.c \
		 ft_four_nums.c \
		 ft_five_nums.c \
		 ft_rules_1.c \
		 ft_rules_2.c \
		 ft_three_nums.c \
		 ft_two_nums.c \
		 ft_five_hundred_nums.c \
		 ft_hundred_nums.c \
		 ft_array_parse.c \
		 ft_traverse.c \
		 ft_bubble_sort.c \
		 ft_checker.c \
		 ft_a2i.c \
		 ft_error.c \
		 ft_algorithm.c \
		 ft_helpers.c

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