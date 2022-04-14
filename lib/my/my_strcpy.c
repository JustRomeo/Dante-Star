/*
** EPITECH PROJECT, 2018
** StrCPY
** File description:
** Fonction StrCpy
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int j = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        j = i +	1;
    }
    dest[j] = '\0';
    return (dest);
}
