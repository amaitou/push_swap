CC = cc
CFLAGS = -Wextra -Werror -Werror
NAME = push_swap
CFILES = push_swap.c \
		 ft_four_nums.c \
		 ft_five_nums.c \
		 ft_ps_helper.c \
		 ft_ps_rules_1.c \
		 ft_ps_rules_2.c \
		 ft_ps_traversal.c \
		 ft_three_nums.c \
		 ft_two_nums.c \
		 ft_five_hundred_nums.c \
		 ft_hundred_nums.c \
		 ft_array_parse.c \
		 ft_traverse.c

SUPERLIB_DIR = ./superlib
SUPERLIB = ./superlib/superlib.a

all : $(SUPERLIB) $(NAME)

$(SUPERLIB):
	$(MAKE) -C $(SUPERLIB_DIR)

$(NAME): $(CFILES)
	$(CC) $(CFLAGS) $? $(SUPERLIB) -o $@

clean:
	$(MAKE) fclean -C $(SUPERLIB_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re