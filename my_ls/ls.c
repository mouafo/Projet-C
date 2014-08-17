#include "ls.h"


int	main (int argc, char **argv)
{
  // declaration de ma structure de parametre.
  S_dir param;

  /*
  **  Je recupere toutes les options et je les parse dans une chaine de caractere.
  **  Si une option n'est pas valide la fonction qui verifie renvoie 1 au premier element de la chaine.
  */

  param.option = get_option(argc, argv);

  /*
  **  Les options additionnel tels que 1, F, f, g, i
  **  ont ete ajouter
  */

  if (param.option[0] == '0')
    {
      my_putstr(my_strcat("\n./ls : illegal option -- ", &param.option[1]));
      my_putstr("\nusage: ./ls [-1adlrtALRFfgi] [dir ...]\n\n");
    }
  else
    {
      // je recupere la premiere position valide et possible pour un chemin de repertoire.
      param.first_pos = get_indexFile(argc, argv);
      // je recupere tous les repertoires valides ...
      param.dirs = get_dirs(param.first_pos, argv, argc);
      controller(param);
    }
  return 0;
}