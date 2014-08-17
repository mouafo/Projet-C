/*
** my_getnbr.c for my_getnbr in /Users/mouafo/Documents/ETNA1/C/jour_2/mouafo_a/my_getnbr
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Mar 25 11:06:52 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Tue Mar 25 19:51:48 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int func_nbr(char *str, int unit)
{
  int nbre;
  int nbre_temp;

  nbre = 0;
  nbre_temp = 0;
  unit = func_unit(str);
  while (*str != 0)
    {
      if (*str >= 48 && *str <= 57)
	{
	  nbre_temp = *str - 48;
	  nbre_temp = nbre_temp * unit;
	  nbre = nbre + nbre_temp;
	  unit = unit / 10;
	  str++;
	}
      else
	{
	  return (-1);
	}
    }
  return (nbre);
}


int  func_unit (char *str)
{
  int unit = 1;
  int i = 0;
  int cpt = 0;

  while ( *str != 0)
    {
      cpt++;
      str++;
    }
  for (i = 1 ; i < cpt ; i++)
    {
      unit = unit * 10;
    }
  return (unit);
}


int my_getnbr(char *str)
{
  int unit;
  int nbre;

  unit = func_unit(str);
  if (*str == '-')
    {
      str++;
      unit = func_unit(str);
      nbre = func_nbr(str,unit);
      nbre = nbre * -1;
    }
  else
    {
      nbre = func_nbr(str,unit);
    }
  return (nbre);
}