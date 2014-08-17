/*
** my_square_root.c for my_square_root in /Users/mouafo/Documents/ETNA1/C/jour_3/mouafo_a/my_square_root
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Thu Mar 27 13:29:01 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Sat Mar 29 14:26:46 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_square_root (int nb)
{
  int i;
  if (nb >= 0)
    {
      if (nb == 1)
	{
	  return 1;
	}
      for (i = 0 ; i <= nb / 2 ; i++)
	{
	  if (i * i == nb)
	    {
	      return i;
	    }
	}
      return 0;
    }
  return 0;
}
