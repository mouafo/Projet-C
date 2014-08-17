#include "ls.h"

void	show_normal(S_dir param, struct stat_perso* tab_file)
{
	int i;
  	int j;

  	i = 4;
  	j = 0;
  	while (tab_file[j].st_name != 0)
	{
          i++;
          if (strstr(param.option, "m"))
          {
            if (strstr(param.option, "i"))
              my_putnbr(tab_file[j].fichier->st_ino);

            if (tab_file[j + 1].st_name != 0)
              my_putstr(my_strcat(" ", my_strcat(tab_file[j].st_name, ", ")));
            else
              my_putstr(my_strcat(tab_file[j].st_name, "\n"));
          }
          else
          {
            if (i != 5)
              my_putstr("\t\t");
            if (strstr(param.option, "i"))
              my_putnbr(tab_file[j].fichier->st_ino);

            if (i % 4 != 0)
              my_putstr(my_strcat(" ", tab_file[j].st_name));
            else
              my_putstr(my_strcat(my_strcat(" ",tab_file[j].st_name), "\n"));
          } 
	  j++;
	}
      my_putstr("\n");
}

void	apply_opt_for_d(S_dir param, struct stat_perso* tab_file)
{
	if (strstr(param.option, "t"))
    tab_file = option_t(tab_file);
  if (strstr(param.option, "r"))
    tab_file = option_r(tab_file);

  if (strstr(param.option, "l") || strstr(param.option, "g"))
    option_l(param, tab_file);
  else
    show_normal(param, tab_file);
}