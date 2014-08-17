 #ifndef __STRUCT_H__
#define __STRUCT_H__

typedef struct s_attack
{
  char *name;
  int PV_heros;
  int PM_heros;
  int PV_monster;
  int PM_monster;
  int id;
  struct s_attack *next;
}        t_attack;

typedef struct s_heros
{
  char *name;
  int PV;
  int PM;
}        t_heros;

typedef struct s_monster
{
  char *name;
  int PV;
  int PM;
}        t_monster;

#endif