/*
** my_swap.c for my_swap in /Users/mouafo/Documents/ETNA1/C/jour_2/mouafo_a/my_swap
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:29:28 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Tue Mar 25 19:23:10 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int  my_swap(int *nbr1, int *nbr2)
{
  int  temp;
  temp  = *nbr1;
  *nbr1 = *nbr2;
  *nbr2 = temp;
  return 0;
}
