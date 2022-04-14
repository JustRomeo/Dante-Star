/*
** EPITECH PROJECT, 2019
** Dante Star
** File description:
** May i go there ?
*/

#include "prototype.h"

static int xend = 0;
static int yend = 0;

int save_static2(int x, int y)
{
    xend = x;
    yend = y;
}

int may_left(char **av, int x, int y)
{
    if (y == yend && x == xend)
        return (0);
    if (x > 0 && av[y][x - 1] != 'X' && av[y][x - 1] != 'Q' &&
        av[y][x - 1] != 'o')
        return (0);
    return (1);
}

int may_right(char **av, int x, int y)
{
    if (y == yend && x == xend)
        return (0);
    if (av[y][x] && av[y][x + 1] != '\0' && av[y][x + 1] != 'X' &&
        av[y][x + 1] != 'Q' && av[y][x + 1] != 'o')
        return (0);
    return (1);
}

int may_up(char **av, int x, int y)
{
    if (y == yend && x == xend)
        return (0);
    if (y > 0 && av[y - 1][x] != 'X' && av[y - 1][x] != 'Q' &&
        av[y - 1][x] != 'o')
        return (0);
    return (1);
}

int may_down(char **av, int x, int y)
{
    if (y == yend && x == xend)
        return (0);
    if (av[y] != NULL && av[y + 1] != NULL && av[y + 1][x] != 'X' &&
        av[y + 1][x] != 'P' && av[y + 1][x] != 'o')
        return (0);
    return (1);
}
