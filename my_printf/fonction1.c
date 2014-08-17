#include "ls.h"

int	 my_strlen(char *str)
{
  int	cpt;

  cpt = 0;
  while (str[cpt] != 0)
    {
      cpt++;
    }
  return cpt;
}


char	 *my_strcpy(char *dest, char *scr)
{
  int	taille;
  int	i;
  taille = my_strlen(scr);
  for (i = 0; i <= taille; i++)
    {
      dest[i] = scr[i];
    }
  return (dest);
}


void	 func_putnbr(int nbre)
{
  int	j;
  int	mod;
  int	reste;
  int	taille;

  j = 0;
  mod = nbre;
  reste = nbre;
  while(nbre != 0)
    {
      nbre = nbre / 10;
      j++;
    }
  taille = j;
  char tab[j];
  while(reste != 0)
    {
      reste = reste/10;
      mod = mod%10;
      tab[j-1] = '0' + mod;
      j = j-1;
      mod = reste;
    }
  for(j = 0 ; j < taille ; j++)
    {
      my_putchar(tab[j]);
    }
}


int  my_putnbr(int nbre)
{
  int nbr;

  if (nbre < 0)
    {
      nbr = nbre * (-1);
      my_putchar('-');
      if (nbr < 10)
	my_putchar('0' + nbr);
      else
	func_putnbr(nbr);
    }
  else
    {
      if (nbre < 10)
	my_putchar('0' + nbre);
      else
	func_putnbr(nbre);
    }
  return 0;
}



char*	my_strcat (char* str1, char* str2)
{
  int	i;
  int	j;
  char* res;
  char	tmp[2000];

  i = 0;
  j = 0;
  res = tmp;
  res = (char*)malloc(20000 * sizeof(char));
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
