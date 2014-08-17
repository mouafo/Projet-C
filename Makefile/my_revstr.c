/*
** my_revstr.c for my_revstr in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strstr
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 12:42:34 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 21:16:25 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int     my_strlen (char *str);
int     f_swap(char *a, char *b);

int  f_swap(char *nbr1, char *nbr2)
{
  char  temp;
  temp  = *nbr1;
  *nbr1 = *nbr2;
  *nbr2 = temp;
  return 0;
}

char *my_revstr(char *str)
{
  int taille;
  int i;

  taille = my_strlen (str);
  i = 0;
  while (i < taille - 1)
    {
      f_swap (&str[i], &str[taille - 1]);
      i++;
      taille--;
    }
  return (str);
}
