/*
** my_sort_int_tab.c for my_sort_int_tab in /Users/mouafo/Documents/ETNA1/C/jour_2/mouafo_a/my_sort_int_tab
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Mar 25 14:00:13 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Tue Mar 25 20:44:22 2014 MOUAFO TCHUENTEU Aymard Gatien
*/

void my_sort_int_tab(int *tab, int taille)
{
  int *tab_2;
  int i;
  int j;
  int tmp;
  tab_2 = tab;
  for (i = 1 ; i <= taille ; i++)
    {
      tab = tab_2;
      for ( j = 0 ; j < taille - i ; j++)
	{
	  if (*tab > *(tab+1))
	    {
	      tmp = *tab;
	      *tab = *(tab+1);
	      *(tab+1) = tmp;
	    }
	  tab++;
	}
    }
}
