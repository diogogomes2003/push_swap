SRC = src/push_swap.c

NAME = push_swap

OBJS = ${SRC:.c=.o}

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

MAKE = make -C

LIBFT_PATH = lib/libft

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