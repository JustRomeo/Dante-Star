/*
** EPITECH PROJECT, 2019
** My_lf_Char
** File description:
** lib
*/

#include "my.h"

int my_lf_char(char *str, char c)
{
    int z = 0;

    if (str == NULL)
        return (-1);
    while (str[z] != c && str[z] != '\0')
        z ++;
    return (z);
}
