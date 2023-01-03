##
## EPITECH PROJECT, 2021
## Project Makefile
## File description:
## This script is the default project Makefile.
##

SRC_MAIN		=	sources/main.c

SRC				=

SRC_UNITTEST   	=	tests/test_project.c

OBJ				=	$(SRC:%.c=%.o) $(SRC_MAIN:%.c=%.o)

OBJ_UNITTEST	=	$(SRC:%.c=%.o) $(SRC_UNITTEST:%.c=%.o)

NAME   			=	menger

UNIT_TEST		=	unit_tests

CC				=	gcc

CFLAGS			+=	-std=gnu11 -Wall -Wextra -Wshadow -I./includes

LDFLAGS 		+=	-L./libs/my/linked_list -lmylinkedlist -L./libs/my/array -lmyarray -L./libs/my/printf -lmyprintf -L./libs/my/basics -lmybasics

TESTFLAGS		+=	--coverage -lcriterion -I./includes

all:		make_lib $(NAME)

make_lib:
	make -C libs/my/basics/
	make -C libs/my/printf/
	make -C libs/my/linked_list/
	make -C libs/my/array/

$(NAME): 	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

tests_run:	make_lib
	make -C tests/
	./$(UNIT_TEST)
	gcovr

tests_coding_style:
	make -C tests/ tests_coding_style

clean: 		clean_lib
	$(RM) $(OBJ)
	$(RM) *.gc*

fclean: 	clean clean_tests fclean_lib fclean_tests
	$(RM) $(NAME)
	$(RM) $(UNIT_TEST)

clean_lib:
	make -C libs/my/basics/ clean
	make -C libs/my/printf/ clean
	make -C libs/my/linked_list/ clean
	make -C libs/my/array/ clean

clean_tests:
	make -C tests/ clean

fclean_lib:
	make -C libs/my/basics/ fclean
	make -C libs/my/printf/ fclean
	make -C libs/my/linked_list/ fclean
	make -C libs/my/array/ fclean

fclean_tests:
	make -C tests/ fclean

re:			fclean all

.PHONY: all make_lib tests_run clean fclean clean_lib fclean_lib re
