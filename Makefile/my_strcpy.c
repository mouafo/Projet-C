/*
** my_strcpy.c for my_strcpy in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strcpy
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 09:56:18 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 21:42:56 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int     my_strlen(char *str);

char *my_strcpy(char *dest, char *scr)
{
  int taille;
  int i;
  taille = my_strlen(scr);
  for (i = 0; i <= taille; i++)
    {
      dest[i] = scr[i];
    }
  return (dest);
}
