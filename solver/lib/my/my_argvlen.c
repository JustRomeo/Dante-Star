/*
** EPITECH PROJECT, 2019
** My Argvlen
** File description:
** oui
*/

#include "my.h"

int my_argvlen(char **argv)
{
    int i = 0;

    while (argv[i] != NULL)
        i ++;
    return (i);
}
