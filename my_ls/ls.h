#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>


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

struct stat_perso*	get_files(struct stat_perso* tab_fichier, S_dir param);
struct stat_perso*	sort(struct stat_perso* tab_file);
struct stat_perso*	option_a(struct stat_perso* tab_file);
struct stat_perso*	option_A(struct stat_perso* temp, struct stat_perso* tab_file);
struct stat_perso*	option_r(struct stat_perso* tab_file);
struct stat_perso*	option_L(struct stat_perso* temp, struct stat_perso* tab_file);
void			option_d(S_dir param);
struct stat_perso*	option_t(struct stat_perso* tab_fichier);
void			option_l(S_dir param, struct stat_perso* tab_file);
struct stat_perso*	ap_option(S_dir param, struct stat_perso* temp, struct stat_perso* tab_file);
char*			get_mode(char *str, struct stat_perso tab_file);
void			show_stat(S_dir param, char *str, struct stat_perso tab_file);
char*			parse_time(char *new_time, char *old_time);
void			show_normal(S_dir param, struct stat_perso* tab_file);
void			apply_opt_for_d(S_dir param, struct stat_perso* tab_file);
void			option_one(struct stat_perso* tab_file);
struct stat_perso*  option_F(struct stat_perso* tab_file);

char*			get_option(int argc, char** argv);
char*			verify_option(char* options);
int			get_indexFile(int argc, char** argv);
char**			get_dirs(int start_pos, char** argv, int argc);
void			controller(S_dir param);
void			show_noOpt(S_dir param);
void			Apply_Opt_Single(S_dir param);
void			Apply_noOpt_More(S_dir param);
void			Apply_Opt_More(S_dir param);

int			apply_opt_all (char* option, int i, char* ligne);
int			apply_opt_simple(char* option, int i, char* ligne);
void			erreur (char* url);

#endif
