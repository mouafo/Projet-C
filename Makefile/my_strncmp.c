/*
** my_strncmp.c for my_strncmp in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 17:40:05 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 21:24:04 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int     my_strlen(char *str);

int func_cmp (char *s1, char *s2, int s)
{
  int i;
  for (i = 0 ; i < s ; i++)
    {
      if (s1[i] < s2[i])
        {
          return s1[i] - s2[i];
        }
      else
        {
          if (s1[i] > s2[i])
            {
              return s1[i] - s2[i];
            }
        }
    }
  return 0;
}

int my_strncmp (char *s1, char *s2, int n)
{
  int result;
  int taille;

  result = 0;
  taille = my_strlen(s2);
  result = func_cmp (s1, s2, n);

  return (result);
}
