/*
** my_strlen.c for my_strlen in /Users/mouafo/Documents/ETNA1/C/jour_2/mouafo_a/my_str_len
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Mar 25 20:23:41 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Tue Mar 25 20:43:07 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
void  my_putchar(char c);
void  func_putnbr(int nbre);

int  my_strlen(char *str)
{
  int  cpt;

  while (*str != 0)
    {
      cpt++;
      str++;
    }
  return cpt;
}
