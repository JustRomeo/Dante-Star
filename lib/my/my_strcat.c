/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Task 2 du jour 7 sur la lib
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str = malloc(sizeof(char) * my_strlen(dest));

    str = my_strcpy(str, dest);
    dest = malloc(sizeof(char) * (my_strlen(str) + my_strlen(src)));
    if (dest == NULL)
        return ('\0');
    while (str[i] != '\0') {
        dest[i] = str[i];
        i ++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        j ++;
        i ++;
    }
    dest[i] = '\0';
    return (dest);
}
