/*
** my_putstr.c for my_putstr in /Users/mouafo/Documents/ETNA1/C/jour_2/mouafo_a/my_putstr
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:48:34 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Tue Mar 25 20:42:23 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_putstr(char *str)
{
  while (*str != 0)
    {
      my_putchar(*str);
      str++;
    }
  return (0);
}
