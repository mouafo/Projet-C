##
## Makefile for makefile in /Users/mouafo/Documents/ETNA1/projet_C/mouafo_a
## 
## Made by Gatien MOUAFO
## Login   <mouafo_a@etna-alternance.net>
## 
## Started on  Mon Jun 30 16:33:03 2014 Gatien MOUAFO
## Last update Wed Jul  2 22:39:18 2014 Gatien MOUAFO
##

CC =		gcc

NAME =		cat

SRC =		gestion_option.c \
		my_putchar.c \
		my_strcat.c \
		my_strlen.c \
		my_strcmp.c \
		my_strstr.c \
		apply_command.c \
		my_put_nbr.c \
		my_putstr.c \
		cat.c

OBJ =		$(SRC:%.c=%.o)

RM =		rm -f

CDFLAGS +=	-W -Wall -Werror -ansi -pedantic -g3


$(NAME):	$(OBJ)
			$(CC) -o $@ $^ $(LDFLAGS)

all:		$(NAME)

clean:
		 $(RM) $(OBJ)

fclean :	 clean
		 $(RM) $(NAME)

re :		 fclean all
