/*
** my_factorielle_rec.c for my_factorielle_rec in /Users/mouafo/Documents/ETNA1/C/jour_3/mouafo_a/my_factorielle_rec
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Mar 27 09:25:06 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Mar 27 16:54:40 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_factorielle_rec (int nb)
{
  int fact;

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
	  fact = nb * my_factorielle_rec (nb - 1);
	  return (fact);
	}
    }
}
