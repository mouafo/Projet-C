#include "ls.h"


char*	get_option(int argc, char **argv)
{
  char	options[20];
  char	*option;
  int	i;
  int	j;
  int	k;

  i = 1;
  k = 0;
  while (i < argc && argv[i][0] == '%' && argv[i] != 0 && my_strcmp(argv[i], "--") != 0)
    {
      if (argv[i][0] == '%')
	for (j = 1; argv[i][j] != 0; j++)
	  {
	    options[k] = argv[i][j];
	    k++;
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
  while (i < argc && argv[i][0] == '%' && (my_strcmp(argv[i], "--") != 0))
    i++;
  if (i < argc && (my_strcmp(argv[i], "--") == 0))
    i++;
  return i;
}

char*	verify_option(char *options)
{
  int	i;
  int	j;
  char	*opt;

  opt = (char*)malloc(10 * sizeof(char));
  j = 0;
  for (i = 0; options[i] != 0; i++)
    if (strchr("diouxXfeEgGcs", options[i]))
      {
	if (!(strchr(opt, options[i])))
	  {
	    opt[j] = options[i];
	    j++;
	  }
      }
    else
      {
	opt[0] = '0';
	opt[1] = options[i];
	free(opt);
	return opt;
      }

  opt[j] = 0;
  //free(opt);
  return opt;
}
