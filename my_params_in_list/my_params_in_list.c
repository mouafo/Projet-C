/*
** my_params_in_list.c for my_param_in_list in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 10:27:19 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 15:25:55 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "my_list.h"

t_list *f_add_node (t_list *list, char *av)
{
  t_list *node;

  node = malloc (sizeof(*node));
  if (node == NULL)
    return (NULL);
  node->next = list;
  node->data = av;
  return (node);
}

t_list  *my_params_in_list (int ac, char **av)
{
  t_list *list;
  int i;

  list = NULL;
  for (i = 0 ; i < ac ; i++)
    {
      list = f_add_node (list, av[i]);
    }
  return (list);
}
