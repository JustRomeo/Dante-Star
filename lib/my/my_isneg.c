/*
** EPITECH PROJECT, 2018
** Isneg
** File description:
** Fonction Isneg
*/
#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}
