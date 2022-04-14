/*
** EPITECH PROJECT, 2018
** my_strlowercase.c
** File description:
** header
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] > 97 && str[i] < 122)
            str[i] = str[i] + 32;
        i ++;
    }
    return (str);
}
