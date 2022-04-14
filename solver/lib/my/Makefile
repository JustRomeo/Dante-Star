##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Le Makefile de la lib
##

SRC =	my_argvlen.c	\
		my_print_array.c	\
		my_putstr.c	\
		my_putstr2.c	\
		my_revstr.c	\
		my_replace_str.c	\
		my_str_to_word_array.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strlen.c	\

OBJ =	$(SRC:.c=.o)

CFLAGS = -I../../include

NAME =	libmy.a

NAME2 = my.h

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)

re: fclean all
