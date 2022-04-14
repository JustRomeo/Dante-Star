##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## My_Sokoban
##

SRC =	srcs/main.c	\
		srcs/algo.c	\
		srcs/av_mv_tools.c	\
		srcs/error.c	\
		srcs/free.c	\
		srcs/may_i_go.c	\
		srcs/mv_and_restart.c	\
		srcs/print_end.c	\
		srcs/saver.c	\
		srcs/usage.c	\

SRCC =	tests/test_project.c	\
		tests/test_lib.c	\

OBJ =	$(SRC:.c=.o)

OBJC =	$(SRCC:.c=.o)

NAME =	solver

CFLAGS = -I./include -L./lib/my -lmy

CRIT = --coverage -lcriterion

WALL = -Wall -Wextra -Werror

CRITERION = unit_tests

VALGRIND = -g3

ARGUMENTS = map.txt

all:	$(NAME)

$(NAME):	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) $(CFLAGS) $(WALL)
			rm -f $(OBJ)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a

exe:		$(NAME)
			clear
			./$(NAME) $(ARGUMENTS)

valgrind:	$(OBJ)
			make -C ./lib/my
			gcc -o $(NAME) $(OBJ) $(CFLAGS) $(VALGRIND)
			rm -f $(OBJ)
			valgrind ./$(NAME) $(ARGUMENTS)
clean:
	rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)
		rm -f ../lib/my/libmy.a
		rm -f lib/my/libmy.a

re: fclean all

error:		$(NAME)
			clear
			./$(NAME) maps/errormap

tests_run:	$(OBJC)
			make -C ./lib/my
			gcc -o $(CRITERION) $(OBJC) $(CFLAGS) $(CRIT)
			rm -f $(OBJC)
			rm -f ../lib/my/libmy.a
			rm -f lib/my/libmy.a
			./$(CRITERION)

.PHONY: all clean fclean re
