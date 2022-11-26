##
## EPITECH PROJECT, 2021
## Libmy Basics Makefile
## File description:
## This script is the default libmy basics Makefile.
##

SRC		=	my_putchar.c 				\
			my_print_alpha.c			\
			my_print_revalpha.c 		\
			my_print_digits.c 			\
			my_isneg.c 					\
			my_print_comb.c 			\
			my_print_comb2.c 			\
			my_put_nbr.c 				\
			my_swap.c 					\
			my_putstr.c 				\
			my_strlen.c 				\
			my_evil_str.c 				\
			my_getnbr.c 				\
			my_compute_factorial_it.c 	\
			my_compute_factorial_rec.c 	\
			my_compute_power_it.c 		\
			my_compute_power_rec.c 		\
			my_compute_square_root.c 	\
			mem_alloc_2d_array.c		\
			my_is_prime.c 				\
			my_find_prime_sup.c 		\
			my_strcpy.c 				\
			my_strncpy.c 				\
			my_revstr.c					\
			my_strcmp.c					\
			my_strstr.c 				\
			my_strlowcase.c				\
			my_strncmp.c				\
			my_str_to_word_array.c

OBJ		=	$(SRC:%.c=%.o)

CC		=	gcc

NAME	=	libmybasics.a

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
