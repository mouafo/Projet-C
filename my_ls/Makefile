##
## Makefile for Makefile in /Users/mouafo/Documents/ETNA1/projet_c/my_ls
## 
## Made by Gatien MOUAFO
## Login   <mouafo_a@etna-alternance.net>
## 
## Started on  Wed Aug 13 09:29:02 2014 Gatien MOUAFO
## Last update Wed Aug 13 09:29:16 2014 Gatien MOUAFO
##


CC =		gcc

NAME =		ls

SRC =		options_1.c\
		 	options_2.c\
		 	options_3.c\
		 	option_anex1.c\
		 	option_anex2.c\
		 	fonction.c\
		 	fonction1.c\
		 	gestion_option.c\
		 	apply_command.c ls.c

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
