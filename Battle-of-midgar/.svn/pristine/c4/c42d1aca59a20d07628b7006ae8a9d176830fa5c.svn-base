#include "struct.h"
#include "fonction.h"
#include "get_info_game.h"

void f_show_stat (t_heros *stat)
{
  my_putstr ("------  Your stat  ------\n");
  my_putstr ("  name = ");
  my_putstr (stat->name);
  my_putstr ("\n  PV   = ");
  my_putnbr (stat->PV);
  my_putstr ("\n  PM   = ");
  my_putnbr (stat->PM);
  my_putstr ("\n");
}

void show_action_heros(t_heros *player, t_attack *stat)
{   
  if (stat->PV_heros != 0)
    {
      my_putstr (" heros loose ");
      my_putnbr (stat->PV_heros);
      my_putstr (" PV\n");
    }
  if (stat->PM_heros != 0)
    {
      my_putstr (" heros loose ");
      my_putnbr (stat->PM_heros);
      my_putstr (" PM\n");
    }
}

void show_action_monster(t_monster *monster, t_attack *stat)
{
  if (stat->PV_monster != 0)
    {
      my_putstr (" monster loose ");
      my_putnbr (stat->PV_monster);
      my_putstr (" PV\n");
    }
  if (stat->PM_monster != 0)
    {
      my_putstr (" monster loose ");
      my_putnbr (stat->PM_monster);
      my_putstr (" PM\n");
    }
}

void f_show_stat_monster (t_monster *stat)
{
  my_putstr ("------  Monster's stat  ------\n");
  my_putstr ("  name = ");
  my_putstr (stat->name);
  my_putstr ("\n  PV   = ");
  my_putnbr (stat->PV);
  my_putstr ("\n  PM   = ");
  my_putnbr (stat->PM);
  my_putstr ("\n");
}

void f_use_attack (t_heros *you, t_monster *ennemy, t_attack *stat)
{
  ennemy->PV = ennemy->PV + stat->PV_monster;
  ennemy->PM = ennemy->PM + stat->PM_monster;
  you->PV = you->PV + stat->PV_heros;
  you->PM = you->PM + stat->PM_heros;
}
