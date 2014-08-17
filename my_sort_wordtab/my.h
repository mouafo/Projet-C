/*
** my.h for my.h in /Users/mouafo/Documents/ETNA1/C/jour_7/mouafo_a/my
** 
** Made by MOUAFO TCHUENTEU Aymard Gatien
** Login   <mouafo_a@etna-alternance.net>
** 
** Started on  Wed Apr  2 11:49:43 2014 MOUAFO TCHUENTEU Aymard Gatien
** Last update Wed Apr  2 12:06:29 2014 MOUAFO TCHUENTEU Aymard Gatien
*/
#ifndef __MY_H__
# define __MY_H__
  
void    my_putchar(char c);
int     my_isneg(int n);
int     my_put_nbr(int nb);
int     my_swap(int *a, int *b);
int     my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
void    my_sort_int_tab(int *tab, int size);
int     my_power_rec(int nb, int power);
int     my_square_root(int nb);
int     my_is_prime(int nombre);
int     my_find_prime_sup(int nb);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int n);
char    *my_revstr(char *str);
char    *my_strstr(char *str, char *to_find);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strupcase(char *str);
char    *my_strlowcase(char *str);
char    *my_strcapitalize(char *str);
int     my_str_isalpha(char *str);
int     my_str_isnum(char *str);
int     my_str_islower(char *str);
int     my_str_isupper(char *str);
int     my_str_isprintable(char *str);
int     my_showstr(char *str);
char    *my_strcat(char *str1, char *str2);
char    *my_strncat(char *str1, char *str2, int n);
int     my_strlcat(char *str1, char *str2, int n);
int     func_unit(char *str);
int     func_nbr(char *str, int unit);
void    func_putnbr(int nbre);
void    func_putnbrspe(int nbre);
void    func_car_hex (char *tab_ascii, char str);
char    func_my_strupcase (char str);
int     func_cmp1 (char *s1, char *s2, int s);
int     func_cmp (char *s1, char *s2, int s);

#endif
