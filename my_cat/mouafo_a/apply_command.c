#include "cat.h"

int	all_cat(char option[], int index, char** argv)
{
  FILE	*flux;
  int	res;

  while (argv[index] != 0)
    {
      res = 0;
      flux = fopen(argv[index], "r");
      if (flux != NULL)
	{
	  res = lire_fichier(argv[index], flux, option);
	  if (res == 1)
	    return res;
          fclose(flux);
	}
      erreur (argv[index]);
      index++;
    }
  return 0;
}

int	lire_fichier(char url[], FILE* flux, char option[])
{
  int	i;
  char	ligne[2000];
  i = 0;
  while (fgets(ligne, 2000, flux) != NULL)
    {
      i++;
      i = apply_opt_all (option, i, ligne);
    }
  erreur(url);
  if (errno)
    return 1;
  return 0;
}


int	apply_opt_all(char* option, int i, char* ligne)
{
  char*	ligne_lue;

  ligne_lue = ligne;
  if (my_strstr(option, "e"))
    ligne_lue = apply_e(ligne);
  if (my_strstr(option, "b"))
    if ((my_strcmp(ligne_lue, "$\n") != 0) && (my_strcmp(ligne_lue, "\n") != 0))
      {
    	my_putstr(f_space(i));
    	my_put_nbr(i);
    	my_putstr(my_strcat(f_space(1000), ligne_lue));
      }
    else
      {
	my_putstr(ligne_lue);
	i--;
      }
  else if(my_strstr(option, "n"))
    {
      my_putstr(f_space(i));
      my_put_nbr(i);
      my_putstr(my_strcat(f_space(1000), ligne_lue));
    }
  else
    my_putstr(ligne_lue);
  return i;
}


int	simple_cat_opt(char option[])
{
  char	ligne[2000];
  int	i;

  i = 0;
  while(1)
    {
      i++;
      if (fgets(ligne, sizeof(ligne), stdin) == NULL)
	  return 0;
      else
	i = apply_opt_simple(option, i, ligne);
    }
  return 1;
}


int	apply_opt_simple(char option[], int i, char ligne[])
{
  char*	ligne_lue;

  ligne_lue = ligne;
  if (my_strstr(option, "e"))
    ligne_lue = apply_e(ligne);
  if (my_strstr(option, "b"))
    if ((my_strcmp(ligne_lue, "$\n") != 0) && (my_strcmp(ligne_lue, "\n") != 0))
      {
    	my_putstr(f_space(i));
    	my_put_nbr(i);
    	my_putstr(my_strcat(f_space(1000), ligne_lue));
    }
    else
      {
	my_putstr(ligne_lue);
	i--;
      }
  else if (my_strstr(option, "n"))
    {
    	my_putstr(f_space(i));
    	my_put_nbr(i);
    	my_putstr(my_strcat(f_space(1000), ligne_lue));
    }
  else
    my_putstr(ligne_lue);
  return i;
}

