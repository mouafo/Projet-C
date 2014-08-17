#include "ls.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	func_cmp1(char *s1, char *s2, int s)
{
  int	i;

  i = 0;
  while (s1[i] != 0 && s2[i] != 0)
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
      i++;
    }
  return 0;
}


int	my_strcmp (char *s1, char *s2)
{
  int	result;
  int	taille[0];

  result = 0;
  taille[0] = my_strlen(s1);
  taille[1] = my_strlen(s2);
  if (taille[0] > taille[1])
    {
      result = func_cmp1(s1, s2, taille[0]);
    }
  else
    {
      result = func_cmp1(s1, s2, taille[1]);
    }
  return (result);
}


int	 my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
