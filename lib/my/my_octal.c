/*
** EPITECH PROJECT, 2018
** my_octal.c
** File description:
** header
*/

#include "my.h"

char *my_octal(int nbr)
{
    int res = 0;
    int i = 0;
    char *resultat = malloc(sizeof(char) * 10);

    while (nbr > 0) {
        res = nbr % 8;
        nbr = nbr / 8;
        resultat[i] = res + 48;
        i ++;
    }
    return (my_revstr(resultat));
}
