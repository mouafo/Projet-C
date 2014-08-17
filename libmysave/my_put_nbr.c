/*
** my_put_nbr.c for my_put_nbr in /Users/mouafo/Documents/ETNA1/C/jour_2/mouafo_a/my_put_nbr
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Tue Mar 25 10:49:43 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Sat Mar 29 13:56:10 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
void  func_putnbr(int nbre);
void  func_putnbrspe(int nbre);
void my_putchar(char c);

int  my_put_nbr(int nbre)
{
  int nbr;
  if (nbre == -2147483648)
    {
      nbr = nbre + 1;
      nbr = nbr * (-1);
      my_putchar('-');
      func_putnbrspe (nbr);
      return 0;
    }
  if(nbre < 0)
    {
      nbr = nbre * (-1);
      my_putchar('-');
      if(nbr < 10)
  	  my_putchar('0' + nbr);
        else
            func_putnbr(nbr);
     }
  else
    {
      if(nbre < 10)
	  my_putchar('0' + nbre);
      else
	  func_putnbr(nbre);
    }
  return 0;
}

void  func_putnbr(int nbre)
{
  int  j;
  int  mod;
  int  reste;
  int taille;

  j = 0;
  mod = nbre;
  reste = nbre;
  while(nbre != 0)
    {
      nbre = nbre / 10;
      j++;
    }
  taille = j;
  char tab[j];
  while(reste != 0)
    {
      reste = reste/10;
      mod = mod%10;
      tab[j-1] = '0' + mod;
      j = j-1;
      mod = reste;
    }
  for(j = 0 ; j < taille ; j++)
    {
      my_putchar(tab[j]);
    }
}

void  func_putnbrspe(int nbre)
{
  int  j;
  int  mod;
  int  reste;
  int taille;

  j = 0;
  mod = nbre;
  reste = nbre;
  while(nbre != 0)
    {
      nbre = nbre / 10;
      j++;
    }
  taille = j;
  char tab[j];
  while(reste != 0)
    {
      reste = reste/10;
      mod = mod%10;
      tab[j-1] = '0' + mod;
      j = j-1;
      mod = reste;
    }
  for(j = 0 ; j < taille ; j++)
    {
      if (j != taille - 1)
	my_putchar(tab[j]);
      else
	my_putchar(1 + tab[j]);
    }
}
