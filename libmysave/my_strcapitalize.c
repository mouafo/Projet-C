/*
** my_strcapitalize.c for my_strcapitalize in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strcapitalize
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 19:49:41 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 19:49:44 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
char my_strupcase (char str)
{
  if (str > 96 && str < 123)
    {
      str = str - 32; 
    }
  return (str);
}

char *my_strcapitalize (char *str)
{
  int i;

  i = 0;
  while (str[i] != 0)
    {
      if (i == 0)
	  str[i] = my_strupcase(str[i]);
      if (str[i-1] == ' ')
	{
	  str[i] = my_strupcase(str[i]);
	}
      else
        {
          if (str[i] > 64 && str[i] < 91 && i != 0)
              str[i] = str[i] + 32;
        }
      i++;
    }
  return (str);
}
