/*
** my_param_to_tab.c for my_param_to_tab in /Users/mouafo/Documents/ETNA1/C/jour_7/mouafo_a/my_param_to_tab
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Wed Apr  2 13:41:20 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Wed Apr  2 21:19:33 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include <stdlib.h>
#include "my.h"
#include "stock_param.h"

int f_word_count(char *str)
{
  int j;
  int i;

  j = 0;
  i = 0;
  while (str[j] != 0)
    {
      if (((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9')) && (str[j + 1] <= 32 || str[j + 1] == 0))
	i++;
      j++;
    }
  return i;
}

char **f_wordtab (char *str, char **tab, int len)
{
  int i;
  int j;
  int k;
  for (i = 0 ; i < len ; i++)
    {
      while (*str <= 32)
        str++;
      j = 0;
      while (str[j] > ' ' && str[j] != 0)
        j++;
      tab[i] = malloc((j + 1) * sizeof(char));
      k = 0;
      while (*str > 32 && *str != 0)
        {
	  tab[i][k] = *str;
	  k++;
          str++;
        }
      tab[i][k] = '\0';
    }
  tab[i] = '\0';
  return (tab);
}

char    **my_str_to_wordtab (char *str)
{
  int len;
  char **tab;

  len = f_word_count (str);
  tab = malloc (len * sizeof(*tab));
  tab = f_wordtab (str, tab, len);
  return (tab);
}

struct s_stock_par *my_param_to_tab(int ac, char **av)
{
    struct s_stock_par *tab;
    int i;

    tab = malloc (ac * sizeof (struct s_stock_par));
    for (i = 0 ; i < ac ; i++)
      {
	tab[i].size_param = my_strlen(av[i]);
	tab[i].str = malloc (tab[i].size_param * sizeof(char));
	tab[i].copy = malloc (tab[i].size_param * sizeof(char));
	tab[i].tab  = malloc (1024 * sizeof(char));
	tab[i].str = av[i];
	my_strcpy (tab[i].copy, av[i]);
	tab[i].tab = my_str_to_wordtab (av[i]);
      }
    return (tab);
}
