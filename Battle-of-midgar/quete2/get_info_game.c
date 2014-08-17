#include "struct.h"
#include "fonction.h"
#include "get_info_game.h"

t_attack  *my_find_elm_eq_in_list(t_attack *begin, void *data_ref, int (cmp)(char *, char *))
{
  while (begin != 0)
    {
      if (cmp (begin->name, data_ref) == 0)
	{
	  return (begin);
	}
      begin = begin->next;
    }
  return (NULL);
}

int add_node (t_attack **list, char *nameg, int *tab)
{
  t_attack *node;

  node = malloc(sizeof(*node));
  if (node == 0)
    return (0);
  node->next = *list;
  node->name = nameg;
  node->PV_heros = tab[0];
  node->PM_heros = tab[1];
  node->PV_monster = tab[2];
  node->PM_monster = tab[3];
  *list = node;
  free(node);
  return (1);
}

t_attack *f_init_monstre ()
{
  char *nameg;
  t_attack *new_monster;
  int *tab;
  
  tab = malloc(4 * sizeof(int));
  new_monster = NULL;
  nameg= "bite";
  tab = f_bite();
  add_node(&new_monster, nameg, tab);
  nameg= "earthquake";
  tab = f_earthquake();
  add_node(&new_monster, nameg, tab);
  nameg= "doom";
  tab = f_doom();
  add_node(&new_monster, nameg, tab);
  return (new_monster);
}

t_attack *f_init ()
{
  char *nameg;
  t_attack *new;
  int *tab;

  tab = malloc (4 * sizeof(int));
  new = NULL;
  nameg= "attack";
  tab = f_attack();
  add_node(&new, nameg, tab);
  nameg= "omnislash";
  tab = f_omnislash();
  add_node(&new, nameg, tab);
  nameg= "fire";
  tab = f_fire();
  add_node(&new, nameg, tab);
  nameg = "thunder";
  tab = f_thunder();
  add_node(&new, nameg, tab);
  //  new = f_init2(new, tab);
  return (new);
}

/*t_attack *f_init2(t_attack *new, int *tab)
{
  char *nameg;

  nameg= "stat";
  tab = f_stat();
  add_node(&new, nameg, tab);
  nameg= "libra";
  tab = f_libra();
  add_node(&new, nameg, tab);
  printf("%s", new->name);  
  return (new);
}*/

t_attack *f_get_game (t_attack *begin)
{
  t_attack *attack;
  char *jeu;
  int (*cmp)(char *, char *);
  t_attack *monstre;
 
  attack = NULL;
  cmp = &my_strcmp;
  monstre = f_init_monstre();
  while (attack == NULL)
    {
      my_putstr("your turn =>  ");
      jeu = readLine();
      if (my_strcmp(jeu, "quit") == 0)
	return (monstre);
      attack = my_find_elm_eq_in_list(begin, jeu, cmp);
      if (attack == NULL)
	{
          my_putstr("\nWarning !!! ATTACK ERROR \n");
          my_putstr("attacks to use : \"attack\", \"omnislash\", \"fire\", \"thunder\", \"stat\", \"libra\"\n\n");
        }
    }
    return (attack);
}
