/*
** my_putstr.c for my_putstr in /Users/mouafo/Documents/ETNA1/C/jour_2/mouafo_a/my_putstr
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Mar 25 09:48:34 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Thu Apr  3 20:59:48 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
void my_putchar(char c);

int my_putstr(char *str)
{
  while (*str != 0)
    {
      my_putchar(*str);
      str++;
    }
  return (0);
}
