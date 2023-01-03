##
## EPITECH PROJECT, 2021
## Project Makefile
## File description:
## This script is the default project Makefile.
##

SRC_BASICS	=	../libs/my/basics/my_putchar.c 					\
				../libs/my/basics/my_print_alpha.c				\
				../libs/my/basics/my_print_revalpha.c 			\
				../libs/my/basics/my_print_digits.c 			\
				../libs/my/basics/my_isneg.c 					\
				../libs/my/basics/my_print_comb.c 				\
				../libs/my/basics/my_print_comb2.c 				\
				../libs/my/basics/my_put_nbr.c 					\
				../libs/my/basics/my_swap.c 					\
				../libs/my/basics/my_putstr.c 					\
				../libs/my/basics/my_strlen.c 					\
				../libs/my/basics/my_evil_str.c 				\
				../libs/my/basics/my_getnbr.c 					\
				../libs/my/basics/my_compute_factorial_it.c 	\
				../libs/my/basics/my_compute_factorial_rec.c 	\
				../libs/my/basics/my_compute_power_it.c 		\
				../libs/my/basics/my_compute_power_rec.c 		\
				../libs/my/basics/my_compute_square_root.c 		\
				../libs/my/basics/my_is_prime.c 				\
				../libs/my/basics/my_find_prime_sup.c 			\
				../libs/my/basics/my_strcpy.c 					\
				../libs/my/basics/my_strncpy.c 					\
				../libs/my/basics/my_revstr.c					\
				../libs/my/basics/my_strcmp.c					\
				../libs/my/basics/my_strstr.c 					\
				../libs/my/basics/my_strncmp.c					\
				../libs/my/basics/my_strupcase.c				\
				../libs/my/basics/my_strlowcase.c				\
				../libs/my/basics/my_strdup.c

SRC_ARRAY	=	../libs/my/array/my_alloc_2d_array.c		\
				../libs/my/array/my_str_to_word_array.c		\
				../libs/my/array/my_show_array.c

SRC_PRINTF 	=	../libs/my/printf/percent_b.c 			\
				../libs/my/printf/percent_c.c 			\
				../libs/my/printf/percent_d.c 			\
				../libs/my/printf/percent_long_d.c 		\
				../libs/my/printf/percent_maj_x.c 		\
				../libs/my/printf/percent_s.c 			\
				../libs/my/printf/percent_u.c 			\
				../libs/my/printf/percent_x.c 			\
				../libs/my/printf/percent_o.c 			\
				../libs/my/printf/percent_percent.c 	\
				../libs/my/printf/redirect.c 			\
				../libs/my/printf/redirect_other.c 		\
				../libs/my/printf/search.c 				\
				../libs/my/printf/my_printf.c

SRC_LINKED_LIST	=	../libs/my/linked_list/my_create_linked_list.c		\
					../libs/my/linked_list/my_delete_linked_list.c		\
					../libs/my/linked_list/my_create_link.c				\
					../libs/my/linked_list/my_go_to_end_link.c			\
					../libs/my/linked_list/my_count_links.c				\
					../libs/my/linked_list/my_print_linked_list.c		\
					../libs/my/linked_list/my_delete_link.c

SRC_UNITTEST   	=	test_mybasics.c		\
					test_myarray.c		\
					test_myprintf.c		\
					test_mylinked_list.c

OBJ_UNITTEST	=	$(SRC_BASICS:%.c=%.o) $(SRC_ARRAY:%.c=%.o) $(SRC_PRINTF:%.c=%.o) $(SRC_LINKED_LIST:%.c=%.o) $(SRC_UNITTEST:%.c=%.o)

UNIT_TEST		=	unit_tests

CC				=	gcc

CFLAGS			+=	-std=gnu11 -Wall -Wextra -Wshadow -I./../includes

LDFLAGS 		+=	-L./../libs/my/linked_list -lmylinkedlist -L./../libs/my/array -lmyarray -L./../libs/my/printf -lmyprintf -L./../libs/my/basics -lmybasics

TESTFLAGS		+=	--coverage -lcriterion -I./../includes

all:		tests_run

make_lib:
	make -C ../libs/my/basics/
	make -C ../libs/my/printf/
	make -C ../libs/my/linked_list/
	make -C ../libs/my/array/

tests_run:	make_lib
	$(RM) *.gc*
	$(CC) -o $(UNIT_TEST) $(SRC_BASICS) $(SRC_ARRAY) $(SRC_PRINTF) $(SRC_LINKED_LIST) $(SRC_UNITTEST) $(LDFLAGS) $(TESTFLAGS)
	cp $(UNIT_TEST) ../$(UNIT_TEST)

tests_coding_style: fclean
	./coding-style.sh ../libs/ .
	./coding-style.sh ../sources/ .

clean:
	$(RM) *.log
	$(RM) $(OBJ_UNITTEST)
	$(RM) *.gc*

fclean: 	clean
	$(RM) $(UNIT_TEST)

re:			fclean all

.PHONY: all make_lib tests_run clean fclean re
