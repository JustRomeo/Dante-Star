/*
** EPITECH PROJECT, 2018
** my_putint_in_str.c
** File description:
** HEADER
*/

#include "my.h"

char *my_putint_in_str(char *str, int z)
{
    int r = z;
    int s = 0;
    int n = 0;
    int b = 10;

    str = malloc(sizeof(char) * 12);
    while (r != 0) {
        r = r / 10;
        s ++;
    }
    while (str[n] != '\0' && s != 0) {
        str[n] = (z % 10 + '0');
        n ++;
        s --;
        z = z / 10;
    }
    str[n] = '\0';
    return (my_revstr(str));
}
