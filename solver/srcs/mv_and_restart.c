/*
** EPITECH PROJECT, 2019
** Dante Star
** File description:
** xandy
*/

#include "prototype.h"

static int norm(char **av, char ***new_av, int *a, int b)
{
    while (av[b][*a]) {
        if (av[b][*a] == 'o')
            (*new_av)[b][*a] = '*';
        else
            (*new_av)[b][*a] = av[b][*a];
        (*a) ++;
    }
    (*new_av)[b][*a] = '\0';
}

int restart(char **av, int x, int y, char **bcp_tab)
{
    int a = 0;
    int b = 0;
    int o = 0;
    char **new_av = NULL;

    while (av[o] != NULL)
        o ++;
    new_av = malloc(sizeof(char *) * (o + 1));
    while (av[b] != NULL) {
        a = 0;
        new_av[b] = malloc(sizeof(char) * (my_strlen(av[b]) + 1));
        norm(av, &new_av, &a, b);
        b ++;
    }
    tab_free(av);
    algo_en_tab(new_av, bcp_tab);
    return (0);
}

int is_blocked(char **av, int x, int y)
{
    int dir = 0;
    static int moves = 0;

    moves ++;
    if (moves > 1) {
        if (may_left(av, x, y) == 1)
            dir ++;
        if (may_right(av, x, y) == 1)
            dir ++;
        if (may_up(av, x, y) == 1)
            dir ++;
        if (may_down(av, x, y) == 1)
            dir ++;
    }
    if (dir == 4)
        return (1);
    return (0);
}

void mv_in_tab(char **av, int *x, int *y)
{
    if (may_right(av, *x, *y) == 0) {
        if (right(av, x, y) == 0)
            av[*y][*x] = 'o';
        return;
    }
    if (may_down(av, *x, *y) == 0) {
        if (down(av, x, y) == 0)
            av[*y][*x] = 'o';
        return;
    }
    if (may_left(av, *x, *y) == 0) {
        if (left(av, x, y) == 0)
            av[*y][*x] = 'o';
        return;
    }
    if (may_up(av, *x, *y) == 0) {
        if (up(av, x, y) == 0)
            av[*y][*x] = 'o';
        return;
    }
}
