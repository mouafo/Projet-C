/*
** my_strncat.c for my_strncat in /Users/mouafo/Documents/ETNA1/C/jour_5/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Sat Mar 29 17:49:03 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Sat Mar 29 17:49:06 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
char *my_strncat (char *str1, char *str2, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (str1[i] != 0)
    {
      i++;
    }
  while (str2[j] != 0 && j < n)
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = 0;
  return str1;
}
