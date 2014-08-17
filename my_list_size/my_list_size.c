/*
** my_list_size.c for my_list_size in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a/my_list_size
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 12:02:52 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 15:25:08 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "my_list.h"

int my_list_size(t_list *begin)
{
  t_list *list;
  int i;

  list = begin;
  i = 0;
  if (list != NULL)
    {
      while (list != NULL)
        {
          i++;
          list = list->next;
        }
      return (i);
    }
  return (0);
}
