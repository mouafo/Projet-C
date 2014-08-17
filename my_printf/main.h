#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

/*
**
**	Declaration des structures
**
*/


struct	stat_perso {
  char*		st_name;
  struct stat	*fichier;
};


struct	directories
{
  char**	dirs;
  char*		option;
  int		first_pos;
}	typedef S_dir;


/*
**
** Declations des fonctions Systeme recoder
**
*/

void 	my_putchar(char c);
int 	my_strcmp(char *s1, char *s2);
int 	my_putstr(char *str);
int     my_strlen(char *str);
char 	*my_strcpy(char *dest, char *scr);
int  	my_putnbr(int nbre);
char* 	my_strcat (char *str1, char *str2);


/*
**
** Declations des fonctions pour le fonctionnement du programme
**
*/

char*			get_option(int argc, char** argv);
char*			verify_option(char* options);
int			get_indexFile(int argc, char** argv);

#endif
