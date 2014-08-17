/*
** my_strdup.c for my_strdup in /Users/mouafo/Documents/ETNA1/C/jour_6/mouafo_a/my_strdup
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Apr  1 10:28:32 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Tue Apr  1 10:40:20 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
char *my_strdup (char *str)
{
  char *str_cpy;

  str_cpy = malloc (my_strlen(str) * sizeof(char));
  my_strcpy (str_cpy, str);
  return (str_cpy);
}
