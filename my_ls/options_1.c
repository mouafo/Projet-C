#include "ls.h"


void option_l(S_dir param, struct stat_perso* tab_file)
{
  int j;
  char str[10];
  int taille;
  struct group *gr;
  struct passwd *ui;

  j = 0;
  taille = 0;
  gr = malloc(sizeof(struct group));
  ui = malloc(sizeof(struct passwd));
  while (tab_file[j].st_name != 0)
  {
        taille += tab_file[j].fichier->st_blocks;
        j++;
  }
  j = 0;
  my_putstr("total ");
  my_putnbr(taille);
  my_putstr("\n");
  while (tab_file[j].st_name != 0)
    {
      if (strstr(param.option, "i"))
      {
        my_putnbr(tab_file[j].fichier->st_ino);
        my_putstr("\t");
      }  
      if (S_ISDIR(tab_file[j].fichier->st_mode))
	my_putstr("d");
      else if (S_ISLNK(tab_file[j].fichier->st_mode))
	my_putstr("l");
      else //if (S_ISREG(tab_file[j].fichier->st_mode))
	my_putstr("-");

      show_stat(param, str, tab_file[j]);
      j++;
    }
  my_putstr("\n\n");
}

struct stat_perso* option_L(struct stat_perso* temp, struct stat_perso* tab_file)
{
  int i;
  int j;

  i = 0;
  j = 0;
  tab_file = sort(tab_file);
  while (tab_file[j].st_name != 0)
    {
      if (tab_file[j].st_name[0] != '.')
	{
	  temp[i] = tab_file[j];
	  i++;
	}
      j++;
    }
    temp[i].st_name = 0;
  return temp;
}

struct stat_perso* option_a(struct stat_perso* tab_file)
{
  return tab_file;
}

struct stat_perso* option_A(struct stat_perso* temp, struct stat_perso* tab_file)
{
  int i;
  int j;

  i = 2;
  j = 0;
  while (tab_file[i].st_name != 0)
    {
      temp[j] = tab_file[i];
      j++;
      i++;
    }
  return temp;
}

struct stat_perso* option_r(struct stat_perso* tab_file)
{
  int i;
  int j;
  struct stat_perso temp;

  i = 1;
  while (tab_file[i].st_name != 0)
    {
      j = 0;
      while (tab_file[j + i].st_name != 0)
	{
	  if (my_strcmp(tab_file[j].st_name, tab_file[j + 1].st_name) < 0)
	    {
	      temp  = tab_file[j];
	      tab_file[j] = tab_file[j + 1];
	      tab_file[j + 1] = temp;
	    }
          j++;
	}
      i++;
    }
  return (tab_file);
}
