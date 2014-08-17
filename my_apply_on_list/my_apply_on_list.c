/*
** my_apply_on_list.c for my_apply_on_list in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a/my_apply_on_list
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 15:04:53 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 15:24:18 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "my_list.h"

int     my_apply_on_list (t_list *begin, int (*f)(void *))
{
  int i;

  while (begin != 0)
    {
      i = f(begin->data);
      begin = begin->next;
    }
  return (i);
}
