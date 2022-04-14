/*
** EPITECH PROJECT, 2019
** Dante Star
** File description:
** Saver files in tab
*/

#include "prototype.h"

static char **avcpy(char **av, char *str)
{
    int a = 0;
    int r = 0;
    char **new_av = NULL;

    while (av[r] != NULL)
        r ++;
    new_av = malloc(sizeof(char *) * (r + 1));
    for (a = 0; a < r; a ++)
        new_av[a] = my_replace(new_av[a], av[a]);
    if (str == NULL)
        new_av[a] == NULL;
    else {
        new_av[a] = my_strcpy(new_av[a], str);
        new_av[a + 1] = NULL;
    }
    free(str);
    tab_free(av);
    return (new_av);
}

char **saver(int fd, char *path)
{
    size_t size = 0;
    int y = 1;
    char **av = NULL;
    char *bcp = NULL;
    char *tmp = NULL;
    struct stat sb;

    if (lstat(path, &sb) == -1)
        return (NULL);
    tmp = malloc(sizeof(char) * sb.st_size);
    read(fd, tmp, sb.st_size);
    av = my_str_to_word_array(tmp, '\n');
    free(bcp);
    free(tmp);
    return (av);
}
