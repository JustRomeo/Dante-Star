/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** C'est les prototypes de la lib
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/sysmacros.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <pwd.h>
#include <string.h>
#include <time.h>
#include <grp.h>
#include <dirent.h>
#include "prototype.h"
#include "get_next_line.h"

int my_power(int nb, int power);
char *my_binary(int nbr);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat (char *dest, char const *src, int nb);
int my_printf(char *str, ...);
char *my_putint_in_str(char *str, int z);
long my_getlong(char *str);
long my_put_long(long nbr);
int my_getdouble(char *str);
int my_put_double(int nbr);
char *my_hexa(int nbr);
void my_print_array_col(int *array, int size);
void my_print_array_line(int *array, int size);
char *my_octal(int nbr);
void *my_putpointer(int nbr);
void my_putspecstr(char const *str);
int my_str(char *str1, char *str2);
char *get_next_line(int fd);
char **my_str_to_word_array(char const *str, char ch);
int my_lf_char(char *str, char c);
char *my_cut_str(char *str, int s);
void my_putstr2(char const *str);

#endif
