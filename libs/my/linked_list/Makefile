##
## EPITECH PROJECT, 2021
## Libmy linked list Makefile
## File description:
## This script is the default libmy linked list Makefile.
##

SRC		=	my_create_linked_list.c		\
			my_delete_linked_list.c		\
			my_create_link.c			\
			my_go_to_end_link.c			\
			my_count_links.c			\
			my_print_linked_list.c		\
			my_delete_link.c

OBJ		=	$(SRC:%.c=%.o)

CC		=	gcc

NAME	=	libmylinkedlist.a

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
