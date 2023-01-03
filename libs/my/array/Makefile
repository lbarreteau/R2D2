##
## EPITECH PROJECT, 2021
## Libmy Basics Makefile
## File description:
## This script is the default libmy basics Makefile.
##

SRC		=	my_alloc_2d_array.c		\
			my_str_to_word_array.c		\
			my_show_array.c

OBJ		=	$(SRC:%.c=%.o)

CC		=	gcc

NAME	=	libmyarray.a

CFLAGS	+=	-Wall -Wextra -Wshadow -Werror -I../../../includes

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(SRC) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
