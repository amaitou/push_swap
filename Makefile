CC = cc
CFLAGS = -Wextra -Werror -Werror
NAME = push_swap
CFILES = ./mandatory/push_swap.c \
		 ./mandatory/ft_first_rules.c \
		 ./mandatory/ft_second_rules.c \
		 ./mandatory/ft_array_parse.c \
		 ./mandatory/ft_bubble_sort.c \
		 ./mandatory/ft_checkers.c \
		 ./mandatory/ft_3atwa.c \
		 ./mandatory/ft_error.c \
		 ./mandatory/ft_stack_perform_1.c \
		 ./mandatory/ft_stack_perform_2.c \
		 ./mandatory/ft_stack_perform_3.c \
		 ./mandatory/ft_utils.c \
		 ./mandatory/ft_perform_all.c \
		 ./mandatory/ft_check_sort.c \
		 ./mandatory/ft_free_stack.c \
		 ./mandatory/ft_struct_init.c

SUPERLIB_DIR = ./superlib
SUPERLIB = ./superlib/superlib.a

all : $(SUPERLIB) $(NAME) $(CFILES)

$(SUPERLIB):
	@$(MAKE) -C $(SUPERLIB_DIR)

$(NAME): $(CFILES)
	@echo "\033[95m[.] output *.c to push_swap\033[0m"
	@$(CC) $(CFLAGS) $? $(SUPERLIB) -o $@

clean:
	@$(MAKE) fclean -C $(SUPERLIB_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re