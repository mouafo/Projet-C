/*
** my_params_in_list.c for my_param_in_list in /Users/mouafo/Documents/ETNA1/C/jour_9/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Apr  4 10:27:19 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Apr  4 16:13:17 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "my_list.h"

t_list *f_add_node (t_list *list, char *av)
{
  t_list *node;

  node = malloc(sizeof(*node));
  if (node == NULL)
    return (NULL);
  node->next = list;
  node->data = av;
  return (node);
}

t_list  *my_params_in_list (int ac,char **av)
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

int my_rev_list(t_list **begin)
{
  t_list *node;
  t_list *node1;

  node = NULL;
  node1 = *begin;
  while (node1 != 0)
    {
      node = f_add_node(node, node1 -> data);
      node1 = node1 -> next;
    }
  *begin = node;
  return (1);
}
int  my_strlen(char *str)
{
  int  cpt;
  
  cpt = 0;
  while (str[cpt] != 0)
    {
      cpt++;
    }
  return cpt;
}
int     my_apply_on_list(t_list *begin,int (*f)(void *))
{
  int i;

  while(begin != 0)
    {
      i = f(begin -> data);
      begin = begin -> next;
    }
  return (i);
}

int main (int ac, char **av)
{
  t_list  *liste;
  t_list  *liste1;
  int taille;


  liste = my_params_in_list (ac,av);
  liste1 = liste;
  while (liste != 0)
    {
      printf("%s\n", liste->data);
      liste = liste -> next;
    }

  //my_apply_on_list(liste1,my_strlen);
  while(liste1 != 0)
    {
      //      printf("%d\n", my_apply_on_list(liste1,my_strlen));
      liste1 = liste1 -> next;
    }
  return (0);
}
