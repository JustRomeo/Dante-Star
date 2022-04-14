/*
** EPITECH PROJECT, 2018
** my_print_array.c
** File description:
** HEADER
*/

#include "my.h"

void my_print_av(char **av)
{
    int y = 0;

    while (av[y] != NULL) {
        my_putstr(av[y]);
        if (av[y + 1] != NULL)
            my_putstr("\n");
        y ++;
    }
}

void my_print_av_line(char **av)
{
    int y = 0;

    while (av[y] != NULL) {
        my_putstr(av[y]);
        y ++;
    }
}
