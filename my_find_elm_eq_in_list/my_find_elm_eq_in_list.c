/*
** my_find_elm_eq_in_list.c for my_find_elm_eq_in_list in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a/my_find_elm_eq_in_list
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 16:31:09 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 16:36:15 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "my_list.h"

t_list  *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)(t_list *, void *))
{
  int i;

  i = -1;
  while (begin != 0)
    {
      if (cmp (begin->data, data_ref) == 0)
	{
	  return (begin);
	}
      begin = begin->next;
    }
  return (i);
}
