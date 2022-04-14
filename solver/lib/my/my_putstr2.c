/*
** EPITECH PROJECT, 2019
** my_putstr2.c
** File description:
** my_putstr2
*/

#include "my.h"

void my_putstr2(char const *str)
{
    int i = 0;

    if (str == NULL)
        return;
    while (str[i] != '\0') {
        write(2, &str[i], 1);
        i ++;
    }
}
