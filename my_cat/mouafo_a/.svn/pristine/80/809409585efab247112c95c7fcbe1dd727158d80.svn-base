/*
** cat.c for cat in /Users/mouafo/Documents/ETNA1/projet_C/mouafo_a
** 
** Made by Gatien MOUAFO
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Mon Jun 30 18:50:26 2014 Gatien MOUAFO
** Last update Mon Jun 30 18:50:32 2014 Gatien MOUAFO
*/
#include "cat.h"


int	main (int argc, char **argv)
{
  char*	option;
  int	i;

  option = get_option(argc, argv);
  if (option[0] == '1')
    {
      printf("Erreur une ou plusieurs options specifier n'est pas prise en charge.");
      printf("\nusage: ./cat [-ben] [file ...]\n");
    }
  else
    {
      i = get_indexFile(argc, argv);
      if (argv[i] == 0)
	simple_cat_opt(option);
      else
	all_cat(option, i, argv);
    }
  return 0;
}

char*	f_space(int index)
{
  if (index >=0 && index < 10)
    return "     ";
  else if (index > 9 && index < 100)
    return "    ";
  else if (index > 99 && index < 1000)
    return "   ";
  else if (index > 999 && index < 10000)
    return "  ";
  else if (index > 999 && index < 10000)
    return " ";
  else
    return "";
}
