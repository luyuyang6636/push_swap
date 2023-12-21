SRCS = ft_apply.c ft_case.c ft_initial_stack_a.c ft_lst.c ft_sort_a.c ft_sort_b.c helper.c moves_a.c moves_b.c moves_comb.c push_swap.c
OBJ = $(SRCS:.c=.o)
CC = gcc
FLAGS = -Werror -Wextra -Wall
RM = rm -f
NAME = push_swap
AR = ar -rcs

%.o:	%.c
		${CC} ${FLAGS} -c -o $@ $<

${NAME}:	${OBJ}
			${CC} ${FLAGS} ${OBJ} -o ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJ}

fclean:	clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re