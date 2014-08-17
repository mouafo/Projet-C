/*
** my_str_isnum.c for my_str_isnum in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_str_isnum
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 21:39:31 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 21:39:45 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_str_isnum(char *str)
{
  int i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] < '0' || str[i] > '9')
	{
	  return 0;
	}
      i++;
    }
  return 1;
}
