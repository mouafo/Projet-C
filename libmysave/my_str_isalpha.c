/*
** my_str_isalpha.c for my_str_isalpha in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_str_isalpha
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 21:52:01 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 21:52:23 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_str_isalpha (char *str)
{
  int i;
  int test;

  i = 0;
  test = 1;
  while (str[i] != 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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
