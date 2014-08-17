/*
** my_sum_params.c for sum_params in /Users/mouafo/Documents/ETNA1/C/jour_6/mouafo_a/my_sum_params
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Apr  1 19:07:12 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Wed Apr  2 13:59:35 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include <stdlib.h>
char *sum_params(int argc, char **argv)
{
  int i;
  char *tab;
  int taille;

  taille = 0;
  for (i = 0 ; i < argc ; i++)
    {
       taille = taille + my_strlen (argv[i]) + 1;
    }
  tab = malloc (taille * sizeof (char));
  for (i = 0 ; i < argc ; i++)
    {
      my_strcat(tab, argv[i]);
      my_strcat(tab, "\n");
    }
  return (tab);
}
