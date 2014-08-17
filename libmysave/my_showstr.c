/*
** my_showstr.c for my_showstr in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Sat Mar 29 16:17:55 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Sat Mar 29 16:17:57 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
void func_car_hex (char *tab_ascii, char str);

int my_showstr (char *str)
{
  int i;
  char *tab_ascii;

  i = 0;
  tab_ascii = "0123456789abcdef";
  while (str[i] != 0)
    {
      if (str[i] < 32 || str[i] > 127)
	{
	  my_putchar('\\'); 
	  func_car_hex (tab_ascii, str[i]);
	}
      else
	{
	  my_putchar(str[i]);
	}
      i++;
    }
  return 0;
}

void func_car_hex (char *tab_ascii, char str)
{
  int i;
  char tab[2];

  i = 1;
  while (str != 0)
    {
      tab[i] = str % 16;
      str = str /16;
      i--;
    }
  tab[1] = tab_ascii[tab[1]];
  tab[0] = tab_ascii[tab[0]];
  for (i = 0 ; i < 2 ; i++)
    {
       my_putchar(tab[i]);
    }
}

