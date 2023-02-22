##
## EPITECH PROJECT, 2023
## Pushswap
## File description:
## Makefile
##


SRC		=		src/main.c	\
				src/utils.c \
				src/list.c \
				src/operations.c \
				src/operations_two.c \
				src/operations_three.c \
				src/algorithm.c \
				src/free.c \
				src/utils2.c \

OBJ		= 		$(SRC:.c=.o)

NAME 	=		push_swap

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
