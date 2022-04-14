/*
** EPITECH PROJECT, 2019
** Dante Stars
** File description:
** Error Handling file
*/

#include "prototype.h"

int output_e(char *str)
{
    char *out = my_strcpy(out, "[Error] ");

    if (str != NULL)
        out = my_strcat(out, str);
    out = my_strcat(out, " :/\n");
    my_putstr2(out);
    free(out);
    return (84);
}

int basics_e(int ac, char **av)
{
    int fd = open(av[1], O_RDONLY);

    if (ac != 2)
        return (output_e("not enough or too much argument"));
    if (fd == -1)
        return (output_e("maze map not found"));
    else
        close(fd);
    return (0);
}
