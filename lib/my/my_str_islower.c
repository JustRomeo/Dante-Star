/*
** EPITECH PROJECT, 2018
** my_str_islower
** File description:
** Fonction
*/

int my_str_islower(char const *str)
{
    int y = 0;

    while (str[y]) {
        if (str[y] < 97 && str[y] > 122)
            return (1);
        y ++;
    }
    return (0);
}
