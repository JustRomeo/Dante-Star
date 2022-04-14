/*
** EPITECH PROJECT, 2019
** Algo in tab
** File description:
** tab
*/

#include "prototype.h"

static void find_end(char **av, int *yend, int *xend)
{
    while (av[*yend + 1] != NULL)
        (*yend) ++;
    while (av[*yend][*xend])
        (*xend) ++;
    while (av[*yend + 1] != NULL) {
        while (av[*yend][*xend] && av[*yend][*xend] != '*')
            (*xend) --;
        if (av[*yend][*xend] == '*')
            break;
        (*xend) = my_strlen(av[*yend]);
        (*yend) --;
    }
    (*xend) --;
}

static void find_start(char **av, int *y, int *x)
{
    while (av[*y] != NULL) {
        while (av[*y][*x] && av[*y][*x] != '*')
            (*x) ++;
        if (av[*y][*x] == '*')
            break;
        (*x) = 0;
        (*y) ++;
    }
}

static int norme(char ***av, char ***bcp_tab, int *x, int *y)
{
    if (is_blocked(*av, *x, *y) == 1) {
        (*av)[*y][*x] = 'X';
        if (restart(*av, *x, *y, *bcp_tab) == 90)
            return (90);
    } else
        mv_in_tab(*av, x, y);
}

int algo_en_tab(char **av, char **bcp_tab)
{
    int x = 0;
    int y = 0;
    int xend = 0;
    int yend = 0;
    int sense = 0;

    find_start(av, &y, &x);
    find_end(av, &yend, &xend);
    save_static2(xend, yend);
    av[y][x] = 'o';
    while (y != yend || x != xend)
        norme(&av, &bcp_tab, &x, &y);
    if (y == yend && x == xend)
        exit (end_tab(av, bcp_tab));
    tab_free(av);
    tab_free(bcp_tab);
    return (0);
}
