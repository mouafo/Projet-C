/*
** my_power_it.c for my_power_it in /Users/mouafo/Documents/ETNA1/C/jour_3/mouafo_a/my_power_it
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Mar 27 11:11:10 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Mar 27 11:34:41 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int func_pow (int nbr, int pwr)
{
  int i;
  int res;

  res = nbr;
  for (i = 1 ; i < pwr ; i++)
    {
      res = res * nbr;
    }
  return (res);
}

int my_power_it (int nb, int power)
{
  int result;

  if (power == 0)
    {
      return (1);
    }
  else
    {
      if (power < 0)
	{
          return 0;
          /*
	  ** power = power * -1;
	  ** result = 1 / func_pow (nb, power);
	  */
	}
      else
	{
	  result = func_pow (nb, power);
	}
    }
  return (result);
}
