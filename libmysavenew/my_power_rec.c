/*
** my_power_rec.c for my_power_rec in /Users/mouafo/Documents/ETNA1/C/jour_3/mouafo_a/my_power_rec
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Mar 27 12:09:45 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Mar 27 12:10:01 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_power_rec (int nb, int power)
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
	  return (0);
        }
      else
        {
          result = nb * my_power_rec (nb, power - 1);
        }
    }
  return (result);
}
