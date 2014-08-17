#include "cat.h"


char*	get_option(int argc, char **argv)
{
  char	options[20];
  char	*option;
  int	i;
  int	j;
  int	k;

  i = 1;
  k = 0;
  while (i < argc && argv[i][0] == '-' && argv[i] != 0 && my_strcmp(argv[i], "--") != 0)
    {
      if (argv[i][0] == '-')
        {
          for (j = 1; argv[i][j] != 0; j++)
            {
              options[k] = argv[i][j];
              k++;
            }
        }
      i++;
    }
  options[k] = 0;
  option = verify_option(options);
  return option;
}


int	get_indexFile(int argc, char **argv)
{
  int	i;

  i = 1;
  while (i < argc && argv[i][0] == '-' && (my_strcmp(argv[i], "--") != 0))
    i++;
  if (i < argc && (my_strcmp(argv[i], "--") == 0))
    i++;
  return i;
}


char*	verify_option(char options[])
{
  int	i;
  int	j;
  char	opt[10];

  j = 0;
  for (i = 0; options[i] != 0; i++)
    {
      if (strchr("ben", options[i]))
        {
          if (!(strchr(opt, options[i])))
            {
              opt[j] = options[i];
              j++;
            }
        }
      else
        {
          opt[0] = '1';
          return strdup(opt);
        }
    }
  opt[j] = 0;
  return strdup(opt);
}


char*	apply_e(char *ligne_lue)
{
  int	j;
  char	ligne[2000];

  for (j = 0; ligne_lue[j] != 0; j++)
    {
      ligne[j] = ligne_lue[j];
      if (ligne[j] == '\n')
        {
          ligne[j] = '$';
          ligne[j + 1] = '\n';
        }
    }
  ligne[j + 1] = 0;
  return strdup(ligne);
}


void    erreur (char* url)
{
  if (errno == EISDIR)
  	my_putstr(my_strcat("./cat : ", my_strcat(url, " : est un repertoire\n")));
  else if (errno == ENOENT)
  	my_putstr(my_strcat("./cat : ", my_strcat(url, " : fichier ou repertoire inexistant\n")));
  else if (errno == EACCES)
  	my_putstr(my_strcat("./cat : ", my_strcat(url, " : Permission inssufisante pour le fichier\n")));
  else if (errno == EBADF)
  	my_putstr(my_strcat("./cat : ", my_strcat(url, " : Mauvais descripteur du fichier\n")));
  else if (errno == EFBIG)
  	my_putstr(my_strcat("./cat : ", my_strcat(url, " : Fichier trop grand\n")));
  else if (errno == ENAMETOOLONG)
  	my_putstr(my_strcat("./cat : ", my_strcat(url, " : Nom de fichier trop grand\n")));
  else if (errno)
  	my_putstr(my_strcat("./cat : ", my_strcat(url, " : Erreur inconnue pour le fichier\n")));
}
