/*
** EPITECH PROJECT, 2018
** PutSTR
** File description:
** Fonction putstr
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    write(1, str, my_strlen(str));
    /*while (str[i]) {
      my_putchar(str[i]);
      i ++;
      }*/
    return (0);
}
