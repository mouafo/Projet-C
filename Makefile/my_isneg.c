/*
** my_isneg.c for my_isneg in /home/mouafo_a/Documents/PIS1-005-Jour_01/mouafo_a/my_aff_comb2
** 
** Made by MOUAFO Tchuenteu Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Mon Mar 24 16:45:38 2014 MOUAFO Tchuenteu Aymard Gatien
** Last update Thu Apr  3 21:09:51 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
void     my_putchar (char c);

int my_isneg(int n)
{
  char result;
  if(n<0)
  {
      result='N';
      my_putchar(result);
  }
  else
  {
      result='P';
      my_putchar(result);
  }
  return (0);
}
