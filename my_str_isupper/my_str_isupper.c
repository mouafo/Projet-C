/*
** my_str_isupper.c for my_str_isupper in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 21:58:58 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 21:59:04 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_str_isupper (char *str)
{
  int i;
  int test;

  i = 0;
  test = 1;
  while (str[i] != 0)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
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
