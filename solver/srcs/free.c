/*
** EPITECH PROJECT, 2019
** Minishell 2
** File description:
** Free.c
*/

#include "prototype.h"

int tab_free_double(char **av, char **av2)
{
    tab_free(av);
    tab_free(av2);
    return (0);
}

int tab_free(char **av)
{
    int y = 0;

    if (av == NULL || av[0] == NULL)
        return (84);
    while (av[y] != NULL) {
        free(av[y]);
        y ++;
    }
    free (av);
    return (0);
}

int free_two(char *str, char *str2)
{
    free(str);
    free(str2);
}

int free_three(char *str, char *str2, char *str3)
{
    free(str);
    free(str2);
    free(str3);
}
