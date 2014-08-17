/*
** my_sort_wordtab.c for my_sort_wordtab in /Users/mouafo/Documents/ETNA1/C/jour_8/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Apr  3 21:45:36 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 21:49:06 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "my.h"

int  my_swap_char (char *nbr1, char *nbr2)
{
  char  temp;
  temp  = *nbr1;
  *nbr1 = *nbr2;
  *nbr2 = temp;
  return 0;
}

int my_sort_wordtab (char **tab)
{
  int taille;
  int i;
  int j;
  int result;

  taille = 0;
  while (tab[taille][0])
    taille++;
  for (i = 0 ; i < taille - 1; i++)
    {
      for (j = 0 ; j < taille - i ; i++)
	{
	  result = my_strcmp (tab[j], tab[j + 1]);
	  if (result > 0)
	    my_swap_char(tab[j], tab[j + 1]);
	}
    }
  return 0;
}
