#include "get_info_game.h"
int *f_stat()
{
  int *tab;

  tab =malloc (4 * sizeof(int));
  tab[0] = 0;
  tab[1] = 0;
  tab[2] = 0;
  tab[3] = 0;
  return tab;
}

int *f_libra()
{
  int *tab;

  tab =malloc (4 * sizeof(int));
  tab[0] = 0;
  tab[1] = -1;
  tab[2] = 0;
  tab[3] = 0;
  return tab;
}

void show_heros(t_attack *attack, t_monster *monster, t_heros *player)
{
  my_putstr (" heros ");
  my_putstr (player->name);   
  my_putstr (" use ");
  my_putstr (attack->name);
  my_putchar ('\n');  
  show_action_heros(player, attack);
  show_action_monster(monster, attack);
}

void show_monster(t_attack *m_attack, t_monster *monster, t_heros *player)
{
  my_putstr (" Ennemy ");
  my_putstr (monster->name);
  my_putstr (" use ");
  my_putstr (m_attack->name);
  my_putchar ('\n');
  show_action_heros(player, m_attack);
  show_action_monster(monster, m_attack);
}

int  show_action(t_attack *l_attack, t_attack *attack_monster, t_monster *monster, t_heros *player)
{
  t_attack *attack;
  t_attack *m_attack;

  attack = f_get_game(l_attack);
  if (my_strcmp(attack->name,"doom") == 0)
    return (0);
  f_use_attack(player, monster, attack);
  if (my_strcmp(attack->name,"stat") == 0 || my_strcmp(attack->name,"libra") == 0)
    {
      if (my_strcmp(attack->name,"stat") == 0)
	f_show_stat(player);
      else
	f_show_stat_monster(monster);
    }
  else
    {
      show_heros(attack, monster, player);
      m_attack = get_attack_monster(attack_monster);
      f_use_attack(player, monster, m_attack);
      my_putstr("\n");
      show_monster(m_attack,monster, player);
      my_putstr("\n");
    }
  return (1);
}
