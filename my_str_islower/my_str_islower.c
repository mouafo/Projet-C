/*
** my_str_islower.c for my_str_islower in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_str_islower
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 21:56:00 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 21:56:02 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_str_islower (char *str)
{
  int i;
  int test;

  i = 0;
  test = 1;
  while (str[i] != 0)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  test = 1;
	}
      else
	{
	  return 0;
	}
      i++;
    }
  return test;
}
