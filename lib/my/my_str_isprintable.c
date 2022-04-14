/*
** EPITECH PROJECT, 2018
** my_str_isprintable
** File description:
** Fonction
*/

int my_str_isprintable(char const *str)
{
    int y = 0;

    while (str[y]) {
        if (str[y] < 32 && str[y] > 126)
            return (1);
        y ++;
    }
    return (0);
}
