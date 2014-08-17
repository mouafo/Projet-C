#include "main.h"

int main(int argc, char **argv) 
{
  t_heros *player;	
  t_attack *l_attack;
  t_monster *monster;
  t_attack *attack_monster;
  int i;

  player = get_name(argc ,argv);
  if (player == 0)
    return (0);
  my_putstr("\033[H\033[2J");
  monster = get_monster();
  l_attack = f_init();
  attack_monster = f_init_monstre();
  while (player->PV > 0 && monster->PV > 0)
    {
      i = show_action(l_attack, attack_monster, monster, player);
      if (i == 0)
		{
	  		free(player);
	  		free(l_attack);
	  		free(monster);
	  		free(attack_monster);
	  		return (0);
		}
    }
  if(player->PV > 0)
    my_putstr("You Win !!!!!!\n");
  else
    my_putstr("You suck Looser !!! You LOOOOOSEEEEE\n");
  free(player);
  free(l_attack);
  free(monster);
  free(attack_monster);
  return (0);
}
