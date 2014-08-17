/*
** my_apply_on_eq_in_list.c for my_apply_on_eq_in_list in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 16:24:22 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 16:25:53 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "my_list.h"

int     my_apply_on_eq_in_list(t_list *begin, int (*f)(void *), void *data_ref, int (*cmp)(t_list *, void *))
{
  int i;

  i = -1;
  while (begin != 0)
    {
      if (cmp (begin->data, data_ref) == 0)
	{
	  i = f(begin->data);
	}
      begin = begin->next;
    }
  return (i);
}
