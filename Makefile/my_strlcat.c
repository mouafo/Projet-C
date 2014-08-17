/*
** my_strlcat.c for my_strlcat in /Users/mouafo/Documents/ETNA1/C/jour_5/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Sat Mar 29 17:48:36 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 09:42:49 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_strlcat (char *str1, char *str2, int l)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (str1[i] != 0)
    {
      i++;
    }
  while (str2[j] != 0 && j < l)
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = 0;
  return i;
}
