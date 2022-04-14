/*
** EPITECH PROJECT, 2019
** my_cut_str
** File description:
** cuting a str
*/

#include "my.h"

char *my_cut_str(char *str, int s)
{
    int a = 0;
    int b = 0;
    char *fnl = malloc(sizeof(char) * my_strlen(str));

    if (s > my_strlen(str) || fnl == NULL)
        return (str);
    while (str[a] != '\0' && b != s) {
        fnl[a] = str[a];
        a ++;
        b ++;
    }
    fnl[a] = '\0';
    return (fnl);
}
