##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## o
##

SRC	=	src/*.c

OBJ	=	gcc

NAME	=	my_rpg

all:
	$(OBJ) $(SRC) -o $(NAME) -I include/ -lcsfml-graphics -lcsfml-system -lcsfml-window -g -g3

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
