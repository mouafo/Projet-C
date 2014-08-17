/*
** my_strupcase.c for my_strupcase in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 17:40:59 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 21:43:59 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
char *my_strupcase (char *str)
{
  int i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
