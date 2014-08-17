#include "ls.h"

void	controller(S_dir param)
{
  int	i;

  i = 0;

  while (param.dirs[i] != 0)
    i++;
  if (i <= 1 && param.dirs[0] != 0)
    if (param.option[0] == 0)
      show_noOpt(param);
    else
      if (strstr(param.option, "d"))
        option_d(param);
      else
        Apply_Opt_Single(param);
  else
    if (strstr(param.option, "d"))
      option_d(param);
    else
      if (param.option[0] == 0)
  Apply_noOpt_More(param);
      else
  Apply_Opt_More(param);
    
}


void	show_noOpt(S_dir param)
{
  struct stat_perso*	tab_file;
  struct stat_perso*	temp;
  S_dir	param_temp;

  temp = (struct stat_perso*)malloc(1000 * sizeof(struct stat_perso));
  temp = get_files(temp, param);
  tab_file = (struct stat_perso*)malloc(1000 * sizeof(struct stat_perso));
  tab_file = option_L(tab_file, temp);
  show_normal(param, tab_file);
  free(temp);
  free(tab_file);
}


void	Apply_Opt_Single(S_dir param)
{
  struct stat_perso*	tab_file;
  struct stat_perso*	temp;

  temp = (struct stat_perso*)malloc(1000 * sizeof(struct stat_perso));
  tab_file = get_files(temp, param);

  if (strstr(param.option, "l") || strstr(param.option, "g"))
    {
      tab_file = ap_option(param, temp, tab_file);
        option_l(param, tab_file);
    }
  else
    {
      tab_file = ap_option(param, temp, tab_file);
      if (strstr(param.option, "1"))
        option_one(tab_file);
      else
        show_normal(param, tab_file);
    }
  tab_file = NULL;
  free(temp);
}


void	Apply_noOpt_More(S_dir param)
{
  int	i;
  S_dir	temp;

  i = 0;
  while (param.dirs[i] != 0)
    {
      temp = param;
      my_putstr(param.dirs[i]);
      my_putstr(" :\n");
      temp.dirs[0] = param.dirs[i];
      show_noOpt(temp);
      my_putstr("\n");
      i++;
    }
}


void	Apply_Opt_More(S_dir param)
{
  int	i;
  S_dir	temp;

  i = 0;
  temp = param;
  while (param.dirs[i] != 0)
  {
    my_putstr(param.dirs[i]);
    my_putstr(" :\n");
    temp.dirs[0] = param.dirs[i];
    Apply_Opt_Single(temp);
    i++;
  }
}
