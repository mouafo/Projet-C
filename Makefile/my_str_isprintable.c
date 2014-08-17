/*
** my_str_isprintable.c for my_str_isprintable in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 22:09:18 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 22:09:22 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_str_isprintable (char *str)
{
  int i;
  int test;

  i = 0;
  test = 1;
  while (str[i] != 0)
    {
      if (str[i] >= 32)
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
