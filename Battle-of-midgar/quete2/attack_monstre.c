#include "get_info_game.h"
#include <time.h>
#include <stdlib.h>

int *f_bite()
{
  int *tab;

  tab = malloc (4 * sizeof(int));
  tab[0] = -6;
  tab[1] = 0;
  tab[2] = 0;
  tab[3] = 0;
  return tab;
}

int *f_earthquake()
{
  int *tab;

  tab =malloc (4 * sizeof(int));
  tab[0] = -15;
  tab[1] = 0;
  tab[2] = -3;
  tab[3] = 0;
  return tab;
}

int *f_doom()
{
  int *tab;

  tab = malloc (4 * sizeof(int));
  tab[0] = -11;
  tab[1] = 0;
  tab[2] = 0;
  tab[3] = -5;
  return tab;
}

t_attack *get_attack_monster(t_attack *tmp)
{ 
  int chiffre;
  int i;
  t_attack *monster;

  srand(time(0) * getpid());
  chiffre = rand() % 3;

  i = 0;
  monster = tmp;
  while (monster != NULL)
  {
      if (i == chiffre)
      {
        return(monster);
      }
    i++;
    monster = monster->next;
  }
  return(tmp);
}
