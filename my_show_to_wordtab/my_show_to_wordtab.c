/*
** my_show_to_wordtab.c for my_show_to_wordtab in /Users/mouafo/Documents/ETNA1/C/jour_6/mouafo_a/my_show_to_wordtab
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Apr  1 18:08:53 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Tue Apr  1 20:12:08 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
int my_show_to_wordtab(char **tab);
{
  int i;
  int taille;

  taille = 0;
  while (tab[i])
    {
      taille++;
      i++;
    }
  for (i = 0 ; i < taille  ; i++)
    {
      my_putstr (tab[i]);
      my_putchar ('\n');
    }
  return 0;
}

