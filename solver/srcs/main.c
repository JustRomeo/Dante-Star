/*
** EPITECH PROJECT, 2019
** Dante star
** File description:
** main
*/

#include "prototype.h"

char **avcpy(char **av)
{
    int a = 0;
    int r = 0;
    char **new_av = NULL;

    while (av[r] != NULL)
        r ++;
    new_av = malloc(sizeof(char *) * (r + 1));
    for (a = 0; a < r; a ++)
        new_av[a] = my_strcpy(new_av[a], av[a]);
    new_av[a] = NULL;
    return (new_av);
}

int main(int ac, char **av)
{
    int fd = 0;
    char **argv = NULL;
    char **bcp_tab = NULL;

    if (my_strcmp(av[1], "-h") == 0)
        return (usage());
    if (basics_e(ac, av) == 84)
        return (84);
    fd = open(av[1], O_RDONLY);
    argv = saver(fd, av[1]);
    if (my_argvlen(argv) > 550 || argv == NULL)
        return (84);
    bcp_tab = avcpy(argv);
    close (fd);
    algo_en_tab(argv, bcp_tab);
    tab_free(argv);
    tab_free(bcp_tab);
    return (0);
}
