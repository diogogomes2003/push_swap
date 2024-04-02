SRC = src/push_swap.c src/error_free.c src/stack_init.c src/stack_utils.c src/tiny_sort.c src/push_swap_command.c src/push_command.c src/reverse_rotate_command.c src/rotate_command.c src/swap_command.c src/push_swap_init.c

NAME = push_swap

OBJS = ${SRC:.c=.o}

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

MAKE = make -C

LIBFT_PATH = libft

LIBFT = -L ${LIBFT_PATH} -lft

all: ${NAME}

$(NAME): ${OBJS}
				${MAKE} ${LIBFT_PATH}
				cc ${FLAGS} ${OBJS} ${LIBFT} -o ${NAME}
				
clean:
				${MAKE} ${LIBFT_PATH} clean
				${RM} ${OBJS}

fclean: clean
				${MAKE} ${LIBFT_PATH} fclean
				${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

.SILENT: