/*
** get_info_name.c for get_info_name in /Users/Ironika/Documents/Piscine_C/Midgar
** 
** Made by HOQUET kevin
** Login   <hoquet_k@etna-alternance.net>
** 
** Started on  Fri Apr  4 20:08:08 2014 HOQUET kevin
** Last update Sat Apr  5 13:44:19 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#include "get_info_name.h"

t_heros	 *get_name(int argc, char **argv)
{
  int		i;
  t_heros	*player;
  char*		error_player;

  i = 1;
  while (argc <= 1)
    {
      my_putstr("\nEnter parameter -n and your Player Name\n");
      return (0);
    } 
  player = malloc(sizeof(t_heros));
    if (player == 0)
    return (0);
  player->name = "Chuck Norris";
  player->PV = 100;
  player->PM = 30;
  while (i < argc)
    {
      if ( my_strcmp(argv[i], "-n") == 0)
          if (i + 1 < argc) 
            player->name = argv[i + 1];
      i++;
    }
  return (player);
}

t_monster *get_monster ()
{
  t_monster *monster;

  monster = malloc(sizeof(t_monster));
  monster->name = "Sephiroth";
  monster->PV = 75;
  monster->PM = 20;	
  return (monster);
}


