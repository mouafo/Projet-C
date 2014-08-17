/*
** my_is_prime.c for my_is_prime in /Users/mouafo/Documents/ETNA1/C/jour_3/mouafo_a/my_is_prime
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Mar 27 13:01:14 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Mar 27 16:55:41 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_is_prime (int nombre)
{
  int i;
  int test;

  test = 1;
  if (nombre < 2)
    {
      return 0;
    }
  for (i = 2 ; i <= nombre / 2 ; i++)
    {
      if (nombre % i  == 0 || nombre == 0)
	{
	  test = 0;
	}
    }
  return (test);
}
