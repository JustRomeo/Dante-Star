/*
** EPITECH PROJECT, 2019
** Dante Star
** File description:
** End Print file
*/

#include "prototype.h"

int end_tab(char **av, char **end)
{
    end = compar(av, end);
    my_print_av(end);
    tab_free(end);
    tab_free(av);
    return (90);
}

static int norm(char **av, char ***bcp, int y, int *x)
{
    if (av[y][*x] == 'o')
        (*bcp)[y][*x] = 'o';
    (*x) ++;
}

char **compar(char **av, char **bcp)
{
    int y = 0;
    int x = 0;

    while (av[y] != NULL) {
        while (av[y][x])
            norm(av, &bcp, y, &x);
        x = 0;
        y ++;
    }
    return (bcp);
}
