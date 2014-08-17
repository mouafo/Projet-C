/*
** my_strstr.c for my_strstr in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strstr
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 13:27:37 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Sat Mar 29 15:16:52 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_strlen (char *scr)
{
  int cpt;

  cpt = 0;
  while (scr[cpt] != 0)
    {
      cpt++;
    }
  return (cpt);
}

char *my_strstr (char *str, char *to_find)
{
  int i;
  int j;
  int taille[2];
  int cpt;

  cpt = -1;
  taille[0] = my_strlen (str);
  taille[1] = my_strlen (to_find);
  for (i = 0 ; i <= taille[0] - taille[1] ; i++)
    {
      cpt = 0;
      for (j = 0 ; j < taille[1] ; j++)
	{
	  if (str[i + j] == to_find[j])
	      cpt++;
	}
      if (cpt == taille[1])
          return (str + i);
    }
      if (cpt != -1 && cpt != taille[1])
	return NULL;
  return (str);
}
