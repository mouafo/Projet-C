/*
** my_find_prime_sup.c for my_find_prime_sup in /Users/mouafo/Documents/ETNA1/C/jour_3/mouafo_a/my_find_prime_sup
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Mar 27 14:07:43 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Mar 27 16:55:21 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_find_prime_sup (int nombre)
{
  int i;
  int j;
  int test;

  j = nombre;
  while (j >= nombre && j > 1)
    {
      test = 0;
      for (i = 2 ; i < j / 2 ; i++)
	{
	  if (j % i == 0)
	    {
	      test = 1;
	    }
	}
      if (test == 0)
	{
	  return j;
	}
      j++;
    }
  return (2);
}
