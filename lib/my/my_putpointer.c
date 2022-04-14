/*
** EPITECH PROJECT, 2018
** my_putpointer.c
** File description:
** header
*/

#include "my.h"

void *my_putpointer(int nbr)
{
    my_putstr("0x");
    my_putstr(my_strlowcase(my_hexa(nbr)));
}
