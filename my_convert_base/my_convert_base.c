char *convert_base(char *nbr, char *base_from, char *base_to)
{

}
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

void func_conv_base_to (char *tab_ascii, char str)
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
