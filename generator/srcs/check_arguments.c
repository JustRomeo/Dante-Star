/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** check_arguments
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int check_if_is_number(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            write(2, "Error: Arguments must be numbers.\n", 34);
            return (0);
        }
    }
    return (1);
}

int check_arguments(int ac, char **av)
{
    if (ac < 3) {
        write(2, "Error: Wrong number of arguments.\n", 34);
        return (84);
    }
    if (!check_if_is_number(av[1]) || !check_if_is_number(av[2])) {
        write(2, "Error: Arguments must be numbers.\n", 34);
        return (84);
    }
    if (ac == 4 && strcmp(av[3], "perfect") != 0) {
        write(2, "Error: unknown argument : ", 26);
        write(2, av[3], strlen(av[3]));
        write(2, "\n", 1);
        return (84);
    }
    return (0);
}
