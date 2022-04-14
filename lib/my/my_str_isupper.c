/*
** EPITECH PROJECT, 2018
** my_str_isupper
** File description:
** Fonction
*/

int my_str_isupper(char const *str)
{
    int y = 0;

    while (str[y]) {
        if (str[y] < 65 && str[y] > 90)
            return (1);
        y ++;
    }
    return (0);
}
