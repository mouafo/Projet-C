/*
** my_strlowcase.c for my_strlowcase in /Users/mouafo/Documents/ETNA1/C/jour_4/mouafo_a/my_strlowcase
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Fri Mar 28 17:48:32 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Fri Mar 28 21:24:26 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
char *my_strlowcase (char *str)
{
  int i;

  i = 0;
  while (str[i] != 0)
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  str[i] = str[i] + 32; 
	}
      i++;
    }
  return (str);
}
