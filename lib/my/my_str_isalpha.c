/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** Fonction
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int y = 0;

    if (str == NULL)
        return (1);
    while (str[y]) {
        if (!(str[y] > 47 && str[y] < 58) && !(str[y] > 65 && str[y] < 90) &&
            !(str[y] > 96 && str[y] < 123))
            return (1);
        y ++;
    }
    return (0);
}
