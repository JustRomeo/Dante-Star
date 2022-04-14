/*
** EPITECH PROJECT, 2018
** StrLen
** File description:
** Fonction StrLen
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (-1);
    while (str[i])
        i ++;
    return (i);
}
