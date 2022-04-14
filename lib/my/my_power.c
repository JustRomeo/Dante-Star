/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** Fonctions
*/

int my_power(int nb, int power)
{
    int y = nb;

    while (power != 1) {
        y *= nb;
        power --;
    }
    return (y);
}
