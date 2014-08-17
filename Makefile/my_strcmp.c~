/*
** my_strcmp.c for my_strcmp in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strcmp
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 15:35:48 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 15:35:57 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int func_cmp1 (char *s1, char *s2, int s)
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

int my_strcmp (char *s1, char *s2)
{
  int result;
  int taille[0];

  result = 0;
  taille[0] = my_strlen(s1);
  taille[1] = my_strlen(s2);
  if (taille[0] < taille[1])
    {
      result = func_cmp1(s1, s2, taille[0]);
    }
  else
    {
      result = func_cmp1(s1, s2, taille[1]);
    }
  return (result);
}
