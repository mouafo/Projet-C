#include "ls.h"

struct stat_perso* ap_option(S_dir param, struct stat_perso* temp, struct stat_perso* tab_file)
{
  if (strstr(param.option, "a") || strstr(param.option, "f"))
    tab_file = option_a(tab_file);
  else if (strstr(param.option, "A"))
    tab_file = option_A(temp, tab_file);
  else
    tab_file = option_L(temp, tab_file);

  if (strstr(param.option, "L"))
    tab_file = option_L(temp, tab_file);
  if (strstr(param.option, "t"))
    tab_file = option_t(tab_file);
  if (strstr(param.option, "r"))
    tab_file = option_r(tab_file);
  if (strstr(param.option, "F"))
    tab_file = option_F(tab_file);
  return tab_file;
}

char* get_mode(char *str, struct stat_perso tab_file)
{
  int i;
  for (i = 0; i < 9; i++)
    str[i] = '-';
  str[i] = 0;
  if (tab_file.fichier->st_mode & S_IRUSR)
    str[0] = 'r';
  if (tab_file.fichier->st_mode & S_IWUSR)
    str[1] = 'w';
  if (tab_file.fichier->st_mode & S_IXUSR)
    str[2] = 'x';
  if (tab_file.fichier->st_mode & S_IRGRP)
    str[3] = 'r';
  if (tab_file.fichier->st_mode & S_IWGRP)
    str[4] = 'w';
  if (tab_file.fichier->st_mode & S_IXGRP)
    str[5] = 'x';
  if (tab_file.fichier->st_mode & S_IROTH)
    str[6] = 'r';
  if (tab_file.fichier->st_mode & S_IWOTH)
    str[7] = 'w';
  if (tab_file.fichier->st_mode & S_IXOTH)
    str[8] = 'x';

  return str;
}

char* parse_time(char *new_time, char *old_time)
{
  int i;
  int j;

  j = 0;
  for (i = 3; i < 16; i++)
    {
      new_time[j] = old_time[i];
      j++;
    }
  new_time[j] = 0;
  return new_time;
}

void show_stat(S_dir param, char *str, struct stat_perso tab_file)
{
  char *m_time;
  m_time = malloc(13 *sizeof(char));
  my_putstr(my_strcat(get_mode(str, tab_file), "   "));
  my_putnbr(tab_file.fichier->st_nlink);
  my_putstr("\t");
  if (strstr(param.option, "g") == NULL)
    my_putstr(my_strcat(getpwuid(tab_file.fichier->st_uid)->pw_name, "\t"));
  my_putstr(my_strcat(getgrgid(tab_file.fichier->st_gid)->gr_name, "  "));
  my_putnbr(tab_file.fichier->st_size);
  m_time = parse_time(m_time, ctime(&tab_file.fichier->st_mtime));
  my_putstr(my_strcat("\t", m_time));
  my_putstr(my_strcat(my_strcat("  ", tab_file.st_name), "\n"));

  free(m_time);
}