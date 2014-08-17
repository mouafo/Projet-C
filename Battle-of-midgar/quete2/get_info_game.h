#ifndef __GET_INFO_GAME_H__
#define __GET_INFO_GAME_H__

#include "fonction.h"
#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

t_attack *f_init();
void f_show_stat(t_heros *stat);
void f_show_stat_monster(t_monster *monster);
void f_use_attack(t_heros *you, t_monster *ennemy, t_attack *stat);
int add_node(t_attack **list, char *nameg, int *tab);
t_attack *f_get_game (t_attack *begin);
t_attack  *my_find_elm_eq_in_list(t_attack *begin, void *data_ref, int (*cmp)(char *, char *));
t_attack *f_init_monstre ();
void show_action_heros(t_heros *player, t_attack *stat);
void show_action_monster(t_monster *monster, t_attack *stat);
t_attack *get_attack_monster(t_attack *monster);
void show_monster(t_attack *m_attack, t_monster *monster, t_heros *player);
int  show_action(t_attack *l_attack, t_attack *attack_monster, t_monster *monster, t_heros *player);
void show_heros(t_attack *attack, t_monster *monster, t_heros *player);
t_attack *f_init2(t_attack *attack, int *tab);
int *f_attack();
int *f_omnislash();
int *f_fire();
int *f_thunder();
int *f_stat();
int *f_libra();
int *f_bite();
int *f_earthquake();
int *f_doom();
#endif
