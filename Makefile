##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	srcs/variable_affectation.c	\
		srcs/destroy.c	\
		srcs/events.c	\
		srcs/setup.c	\
		srcs/fonction.c	\
		srcs/main.c

NAME	=	my_rpg

all:	$(NAME)

$(NAME):
	make re -C lib/my
	gcc $(SRC) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -o $(NAME)

clean:
	rm -rf *~ \#*\# .\#*

fclean:
	rm -f $(NAME)

re:	fclean all clean
