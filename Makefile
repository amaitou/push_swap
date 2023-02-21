CC = cc
CFLAGS = -Wextra -Werror -Werror
NAME = push_swap
CHECKER = checker
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

BFILES = ./bonus/checker_bonus.c \
		 ./bonus/ft_3atwa_bonus.c \
		 ./bonus/ft_array_parse_bonus.c \
		 ./bonus/ft_check_sort_bonus.c \
		 ./bonus/ft_error_bonus.c \
		 ./bonus/ft_first_rules_bonus.c \
		 ./bonus/ft_second_rules_bonus.c \
		 ./bonus/ft_struct_init_bonus.c \
		 ./bonus/ft_checkers_bonus.c \
		 ./bonus/ft_free_stack_bonus.c \
		 ./bonus/ft_stack_operations.c

SUPERLIB_DIR = ./superlib
SUPERLIB = ./superlib/superlib.a

all : $(SUPERLIB) $(NAME) $(CFILES)

$(SUPERLIB):
	@$(MAKE) -C $(SUPERLIB_DIR)

$(NAME): $(CFILES)
	@echo "\033[95m[.] output *.c to push_swap\033[0m"
	@$(CC) $(CFLAGS) $(CFILES) $(SUPERLIB) -o $@

$(CHECKER): $(BFILES) $(CFILES)
	@echo "\033[95m[.] output *.c to checker\033[0m"
	@$(CC) $(CFLAGS) $(BFILES) $(SUPERLIB) -o $@

bonus: all $(CHECKER)

clean:
	@$(MAKE) fclean -C $(SUPERLIB_DIR)

fclean: clean
	@rm -rf $(NAME) $(CHECKER)

re: fclean all

.PHONY: all clean fclean re bonus