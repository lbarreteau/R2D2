##
## EPITECH PROJECT, 2021
## Project Makefile
## File description:
## This script is the default project Makefile.
##

SRC_MAIN		=	sources/main.c

SRC				=	sources/check_arguments.c

SRC_UNITTEST   	=	tests/test_project.c

OBJ				=	$(SRC:%.c=%.o) $(SRC_MAIN:%.c=%.o)

OBJ_UNITTEST	=	$(SRC:%.c=%.o) $(SRC_UNITTEST:%.c=%.o)

NAME   			=	menger

UNIT_TEST		=	unit_tests

CC				=	gcc

CFLAGS			+=	-std=gnu11 -Wall -Wextra -Wshadow -I./includes

LDFLAGS 		+=	-L./libs/my/printf -lmyprintf -L./libs/my/basics -lmybasics

TESTFLAGS		+=	--coverage -lcriterion -I./includes

all:		make_lib $(NAME)

make_lib:
	make -C libs/my/basics/
	make -C libs/my/printf/

$(NAME): 	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

tests_run:	make_lib
	$(RM) *.gc*
	$(CC) -o $(UNIT_TEST) $(SRC) $(SRC_UNITTEST) $(LDFLAGS) $(TESTFLAGS)
	./$(UNIT_TEST)
	gcovr

clean: 		clean_lib
	$(RM) $(OBJ)
	$(RM) *.gc*

fclean: 	clean fclean_lib
	$(RM) $(NAME)
	$(RM) $(UNIT_TEST)

clean_lib:
	make -C libs/my/basics/ clean
	make -C libs/my/printf/ clean

fclean_lib:
	make -C libs/my/basics/ fclean
	make -C libs/my/printf/ fclean

re:			fclean all

.PHONY: all make_lib tests_run clean fclean clean_lib fclean_lib re
