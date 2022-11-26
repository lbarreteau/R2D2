##
## EPITECH PROJECT, 2021
## Libmy Makefile
## File description:
## This script is the default libmy Makefile.
##

SRC		=	percent_b.c 		\
			percent_c.c 		\
			percent_d.c 		\
			percent_long_d.c 	\
			percent_maj_x.c 	\
			percent_s.c 		\
			percent_u.c 		\
			percent_x.c 		\
			percent_o.c 		\
			percent_percent.c 	\
			redirect.c 			\
			redirect_other.c 	\
			search.c 			\
			my_printf.c

OBJ		=	$(SRC:%.c=%.o)

CC		=	gcc

NAME	=	libmyprintf.a

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
