/*
** my_factorielle_it.c for my_factorielle_it in /Users/mouafo/Documents/ETNA1/C/jour_3/mouafo_a/my_factorielle_it
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Mar 27 09:25:06 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Mar 27 16:54:16 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_factorielle_it (int nb)
{
  int fact;
  int i;

  fact = 1;
  if (nb == 0)
    {
      return 1;
    }
  else
    {
      if (nb < 0 || nb > 12)
	{
	  return 0;
	}
      else
	{
	  for (i = 1 ; i < nb ; i ++)
	    {
	      fact = fact * (i + 1);
	    }
	  return (fact);
	}
    }
}
