##
## makefile for Exercice_01 in /Users/Ironika/Documents/Piscine_C/Jour_08/Makefile
## 
## Made by HOQUET kevin
## Login   <hoquet_k@etna-alternance.net>
## 
## Started on  Thu Apr  3 11:06:24 2014 HOQUET kevin
## Last update Sat Apr  5 17:07:36 2014 HOQUET kevin
##

CC =		gcc

NAME =		Ragnarock

SRC =		main.c get_info_name.c fonction.c get_info_game.c attack_heros.c attack_info.c attack_monstre.c fonction1.c apply_attack.c

OBJ =		$(SRC:%.c=%.o)

RM =		rm -f

CDFLAGS +=	-W -Wall -Werror -ansi -pedantic -g3

LDFLAGS =

$(NAME):	$(OBJ)
			$(CC) -o $@ $^ $(LDFLAGS)

all:		$(NAME)

clean:
		 $(RM) $(OBJ)

fclean :	 clean
		 $(RM) $(NAME)

re :		 fclean all
