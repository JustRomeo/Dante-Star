/*
** EPITECH PROJECT, 2018
** my_putspecstr.c
** File description:
** HEADER
*/

#include "my.h"

void switch_spec(char flag)
{
    my_putchar('\\');
    if (flag < 10)
        my_putstr("00");
    else if (flag > 9)
        my_putchar('0');
    my_put_nbr(flag);
}

void my_putspecstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < 32)
            switch_spec(str[i]);
        else
            my_putchar(str[i]);
        i ++;
    }
}
