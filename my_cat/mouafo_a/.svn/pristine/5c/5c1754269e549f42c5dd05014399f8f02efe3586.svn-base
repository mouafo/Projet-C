/*
** my_strcat.c for my_strcat in /Users/mouafo/Documents/ETNA1/C/jour_5/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Sat Mar 29 17:48:17 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Jul  3 22:38:38 2014 Gatien MOUAFO
*/
#include "cat.h"

char* my_strcat (char *str1, char *str2)
{
  int i;
  int j;
  char* res;
  char tmp[2000];

  i = 0;
  j = 0;
  res = tmp;
  while (str1[i] != 0)
    {
      res[i] = str1[i];
      i++;
    }
  while (str2[j] != 0)
    {
      res[i] = str2[j];
      i++;
      j++;
    }
  res[i] = str2[j];
  return res;
}
