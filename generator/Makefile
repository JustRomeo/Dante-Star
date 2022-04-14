##
## EPITECH PROJECT, 2019
## Dante star
## File description:
## Makefile
##

CC			=	gcc

RM			=	rm -f

CFLAGS		+=	-Wall -Wextra -Werror -g3

CPPFLAGS	=	-I include/

SRCS		=	srcs/main.c					\
				srcs/generator.c			\
				srcs/check_arguments.c		\
				srcs/create_graph.c			\
				srcs/display_graph.c		\
				srcs/display_maze.c			\
				srcs/free_graph.c			\
				srcs/remove_last.c			\
				srcs/generate_maze.c

OBJS		=	$(SRCS:.c=.o)

NAME		=	generator

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CPPFLAGS)

clean:
	$(RM) $(OBJS)
	$(RM) *~

fclean:	clean
	$(RM) $(NAME)
	$(RM) *.gc*

re: fclean all

.PHONY: all clean fclean re