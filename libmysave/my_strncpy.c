/*
** my_strncpy.c for my_strncpy in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strncpy
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 11:16:47 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 22:18:24 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
char *my_strncpy (char *dest, char *scr, int n)
{
  int i;
  int cpt;
  char *tmp;

  tmp = my_strcpy (dest, scr);
  while (*tmp != 0)
    {
      cpt++;
      tmp++;
    }
  if (n <= cpt)
    {
      if (n == 0)
	  *dest = '\0';
      for (i = 0 ; i < n ; i++)
	{
	  dest[i] = scr[i];
	}
    }
  else
    {
      dest = my_strcpy (dest, scr);
    }
  return (dest);
}
