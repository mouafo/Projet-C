GC =		 gcc

NAME =		 do-op

SRC = 		 main.o my_putchar.c my_putstr.c my_put_nbr.c my_square_root.c my_find_prime_sup.c my_getnbr.c \
		 my_is_prime.c my_isneg.c my_power_rec.c my_revstr.c my_showstr.c my_sort_int_tab.c \
		 my_str_isalpha.c my_str_islower.c my_str_isnum.c my_str_isprintable.c my_str_isupper.c \
		 my_strcapitalize.c my_strcat.c my_strcmp.c my_strcpy.c my_strlcat.c my_strlen.c \
		 my_strlowcase.c my_strncat.c my_strncmp.c my_strncpy.c my_strstr.c my_strupcase.c my_swap.c op.c

OBJ =		 $(SRC:%.o=%.c)

RM =		 rm -f

AR = 		 ar r

LH = 		 -L. my.h

CFLAGS =	-W -Wall -ansi -pedantic


$(NAME): 	$(OBJ)
		$(GC) $(SRC) -o $(NAME)
		$(AR) $(NAME) $(OBJ)


all:		$(NAME)


clean:
		$(RM) $(OBJ)


