#include "ls.h"

void	option_one(struct stat_perso* tab_file)
{
  	int j;

    j = 0;
  	while (tab_file[j].st_name != 0)
	   {
            my_putstr(my_strcat(tab_file[j].st_name, "\n"));
	           j++;
	   }
}

struct stat_perso*  option_F(struct stat_perso* tab_file)
{
    int j;

    j = 0;
    while (tab_file[j].st_name != 0)
     {
            if (S_ISDIR(tab_file[j].fichier->st_mode))
              tab_file[j].st_name = my_strcat(tab_file[j].st_name, "/");
            else if (tab_file[j].fichier->st_mode & S_IXUSR)
              tab_file[j].st_name = my_strcat(tab_file[j].st_name, "*");
            j++;
     }
     return tab_file;
}