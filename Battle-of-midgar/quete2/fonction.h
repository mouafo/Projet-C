#ifndef __FONCTION_H__
#define __FONCTION_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void 	my_putchar(char c);
int 	my_strcmp(char *s1, char *s2);
int 	my_putstr(char *str);
int     my_strlen(char *str);
char 	*my_strcpy(char *dest, char *scr);
char	*readLine();
int  	my_putnbr(int nbre);

#endif
