/*
** EPITECH PROJECT, 2018
** GetNBR
** File description:
** Fonction GetNbr
*/

#include "my.h"

int my_getdouble(char *str)
{
    double sign = 1;
    double result = 0;

    while (*str == '-' || *str == '+') {
        if (*str == '-')
            sign = - sign;
        str ++;
    }
    while (*str != '\0' && *str >= '0' && *str <= '9') {
        if (result > 214748364)
            return (0);
        if (result == 214748364 && *str > 7 && sign == 1)
            return (0);
        if (result == 214748364 && *str > 8 && sign == -1)
            return (0);
        result = result * 10 + *str - 48;
        str ++;
    }
    return (result * sign);
}
