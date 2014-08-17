/*
** my_strncpy.c for my_strncpy in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strncpy
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 11:16:47 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 21:25:18 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int     my_strlen(char *str);
char    *my_strcpy(char *dest, char *src);

char *my_strncpy (char *dest, char *scr, int n)
{
  int i;
  int cpt;
 

  i = 0;
  cpt = my_strlen (scr);
  if (n < cpt)
    {
      for (i = 0 ; i < n ; i++)
	{
	  dest[i] = scr[i];
	}
    }
  else
    {
      my_strcpy (dest, scr);
      dest[cpt] = '\0';
    }
  return (dest);
}
