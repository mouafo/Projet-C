#include "ls.h"

void option_R(S_dir param)
{
  
}

void option_d(S_dir param)
{
  int i;
  struct stat_perso* tab_file;
  struct stat *fichier;
  i = 0;

  tab_file = (struct stat_perso*)malloc(1000 * sizeof(struct stat_perso));
  while (param.dirs[i] != 0)
    {
      fichier = malloc(1024 *sizeof(struct stat));
      if (lstat(param.dirs[i], fichier)) {
        perror(param.dirs[i]);
        exit(EXIT_SUCCESS);
      }
      tab_file[i].st_name = param.dirs[i];
      tab_file[i].fichier =  fichier;
      i++;
    }
    
  apply_opt_for_d(param, tab_file);
  free(fichier);
  free(tab_file);
}

struct stat_perso* option_t(struct stat_perso* tab_file)
{
  int i;
  int j;
  struct stat_perso temp;

  i = 1;
  while (tab_file[i].st_name != 0)
    {
      j = 0;
      while (tab_file[j + i].st_name != 0)
      {
        if ((tab_file[j].fichier->st_mtime) < (tab_file[j + 1].fichier->st_mtime))
        {

        temp  = tab_file[j];
          tab_file[j] = tab_file[j + 1];
        tab_file[j + 1] = temp;
        }
          j++;
      }
      i++;
    }
  return (tab_file);
}

struct stat_perso* get_files(struct stat_perso* tab_fichier, S_dir param)
{
  DIR* rep;
  int i;
  struct dirent* fichierLu;
  struct stat *fichier;

  i = 0;
  rep = opendir(param.dirs[0]);

  while ((fichierLu = readdir(rep)) != NULL)
  {
    fichier = malloc(1024 *sizeof(struct stat));
    tab_fichier[i].st_name = fichierLu->d_name;
    if (lstat(my_strcat(my_strcat(param.dirs[0],"/"), fichierLu->d_name), fichier)) {
        perror(fichierLu->d_name);
        exit(EXIT_SUCCESS);
    }

    tab_fichier[i].fichier =  fichier;

    i++;
  }
    free(fichier);
  //closedir(rep);
  return (tab_fichier);
}


struct stat_perso* sort(struct stat_perso* tab_file)
{
  int i;
  int j;
  struct stat_perso temp;

  i = 1;
  while (tab_file[i].st_name != 0)
    {
  	  j = 0;
      while (tab_file[j + i].st_name != 0)
	    {
	    	if (my_strcmp(tab_file[j].st_name, tab_file[j + 1].st_name) > 0)
	    	{

				temp  = tab_file[j];
			  	tab_file[j] = tab_file[j + 1];
				tab_file[j + 1] = temp;
	    	}
	      	j++;
	    }
	    i++;
    }
  return (tab_file);
}
