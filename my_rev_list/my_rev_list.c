/*
** my_rev_list.c for my_rev_list in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a/my_rev_list
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 13:00:34 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 15:26:42 2014 MOUAFO TCHUENTEU Aymard Gatien
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

int my_rev_list (t_list **begin)
{
  t_list *node;
  t_list *node1;

  node = NULL;
  node1 = *begin;
  while (node1 != 0)
    {
      node = f_add_node (node, node1->data);
      node1 = node1->next;
    }
  *begin = node;
  return (1);
}
