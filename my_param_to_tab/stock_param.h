/*
** stock_param.h for s_stock_par in /Users/mouafo/Documents/ETNA1/C/jour_7/mouafo_a/my_param_to_tab
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Wed Apr  2 12:23:21 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Wed Apr  2 12:24:38 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#ifndef __STOCKPARAM_H__
# define __STOCKPARAM_H__

struct s_stock_par
{
  int  size_param;     /* longueur du parametre */
  char *str;           /* adresse du parametre  */
  char *copy;          /* copie du parametre    */
  char **tab;          /* renvoye par my_str_to_wordtab  */
};

#endif
