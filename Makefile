##
## Makefile for Makefile in /home/vincen_o/rendu/Piscine-C-lib/my
##
## Made by Arthur Vincent
## Login   <vincen_o@epitech.net>
##
## Started on  Mon Oct 21 09:59:58 2013 Arthur Vincent
## Last update Mon Apr  7 15:07:32 2014 Arthur Vincent
##

CC	= cc -g -I include/

NAME	= screencool

SRC	= src/lib.c \
	  src/main.c \
	  src/my_put_nbr.c

OBJ	= $(patsubst src/%.c,obj/%.o,$(SRC))

RM	= rm -f

DIR	= my_src_lib

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -lncurses

obj/%.o: src/%.c
	 @mkdir -p obj
	 $(CC) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
