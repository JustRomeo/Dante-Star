/*
** EPITECH PROJECT, 2019
** Dante Star
** File description:
** Double Tab mouvement file
*/

#include "prototype.h"

int left(char **av, int *x, int *y)
{
    if ((*x) > 0 && av[*y][*x - 1] != 'X' && av[*y][*x - 1] != 'Q') {
        (*x) --;
        return (0);
    }
    return (1);
}

int right(char **av, int *x, int *y)
{
    if (av[*y][*x] && av[*y][*x + 1] != '\0' && av[*y][*x + 1] != 'X' &&
        av[*y][*x + 1] != 'Q') {
        (*x) ++;
        return (0);
    }
    return (1);
}

int up(char **av, int *x, int *y)
{
    if ((*y) > 0 && av[*y - 1][*x] != 'X' && av[*y - 1][*x] != 'Q') {
        (*y) --;
        return (0);
    }
    return (1);
}

int down(char **av, int *x, int *y)
{
    if (av[*y] != NULL && av[*y + 1] != NULL && av[*y + 1][*x] != 'X' &&
        av[*y + 1][*x] != 'P') {
        (*y) ++;
        return (0);
    }
    return (1);
}
