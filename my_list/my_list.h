/*
** my_list.h for s_list in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a/my_list
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 09:56:40 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 15:27:31 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#ifndef __MYLIST_H__
#define __MYLIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
  void *data;
  struct s_list *next;
}              t_list;

t_list  *my_params_in_list (int ac,char **av);
int my_list_size(t_list *begin);
int my_rev_list(t_list **begin);
int     my_apply_on_list(t_list *begin,int (*f)(void *));
int     my_apply_on_eq_in_list(t_list *begin, int (*f)(void *), void *data_ref, int (*cmp)(t_list *, void *))

#endif
