/*
** EPITECH PROJECT, 2019
** My replacer .c
** File description:
** oui
*/

#include "my.h"

char *my_replace(char *str, char *str2)
{
    if (str == NULL || str2 == NULL);
        return (NULL);
    free (str);
    str = my_strcpy(str, str2);
    return (str);
}
