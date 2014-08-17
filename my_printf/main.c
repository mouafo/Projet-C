#include "main.h"


int	main (int argc, char **argv)
{
  // declaration de ma structure de parametre.
  S_dir param;

  /*
  **  Je recupere toutes les options et je les parse dans une chaine de caractere.
  **  Si une option n'est pas valide la fonction qui verifie renvoie 1 au premier element de la chaine.
  */

  param.option = get_option(argc, argv);
  if (param.option[0] == '0')
    {
      my_putstr(my_strcat("\n./my_printf : illegal option -- ", &param.option[1]));
      my_putstr("\nusage: ./my_printf format [ARGUMENT]...\n");
    }
  else
    {
      param.first_pos = get_indexFile(argc, argv);
    }
  return 0;
}
