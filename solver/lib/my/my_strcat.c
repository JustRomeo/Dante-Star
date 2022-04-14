/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** my_strmcat
*/
#include <stdlib.h>
#include "my.h"

char *my_strcat(char *str1, char const *str2)
{
    int size1 = my_strlen(str1);
    int size2 = my_strlen(str2);
    int i = 0;
    int j = 0;
    char *str = malloc(sizeof(char) * (size1 + size2 + 1));

    if (str == NULL)
        return (NULL);
    for (i = 0; str1[i] != '\0'; i ++)
        str[i] = str1[i];
    for (j = 0; str2[j] != '\0'; j ++)
        str[i + j] = str2[j];
    str[i + j] = '\0';
    return (str);
}
