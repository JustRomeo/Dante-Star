/*
** EPITECH PROJECT, 2018
** StrNCpy
** File description:
** Fonction StrnCpy
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i ++)
        dest[i] = src[i];
    return (dest);
}
