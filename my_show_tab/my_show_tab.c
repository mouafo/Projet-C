/*
** my_show_tab.c for my_show_tab in /Users/mouafo/Documents/ETNA1/C/jour_7/mouafo_a/my_show_tab
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Wed Apr  2 13:39:16 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Wed Apr  2 21:17:21 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include <stdlib.h>
#include "my.h"
#include "stock_param.h"

int my_show_to_wordtab(char **tab)
{
  int i;
  int taille;

  taille = 0;
  while (tab[i])
    {
      taille++;
      i++;
    }
  for (i = 0 ; i < taille  ; i++)
    {
      my_putstr (tab[i]);
      my_putchar ('\n');
    }
  return 0;
}

int my_show_tab(struct s_stock_par *par)
{
  int taille;
  int i;
  
  taille = 0;
  while(par[taille].size_param)
      taille++;
   for ( i = 0; i < taille ; i++)
    {
      my_putstr (par[i].copy);
      my_putchar (',');
      my_putchar (' ');
      my_putnbr (par[i].size_param);
      my_putchar (',');
      my_putchar (' ');
      my_show_to_wordtab(par[i].tab);
    }
  return (0);
}
