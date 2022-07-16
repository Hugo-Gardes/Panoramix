/*
** EPITECH PROJECT, 2020
** B-CPE-100-MPL-1-1-rush2-hugo.gardes
** File description:
** test_float.c
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

int my_pow(int pow, int nbr)
{
    for (int save = nbr; pow - 1 > 0; pow--)
        nbr *= save;
    return (nbr);
}

float my_round(float nbr, int r)
{
    if (r == 0)
        r = 6;
    int nb = nbr * my_pow(r + 1, 10);
    int nb_pass = nb % 10;
    float temp = 0.0;
    float result = 0.0;

    nb /= 10;
    if (nb_pass >= 5)
        nb += 1;
    temp = nb;
    result = temp / my_pow(r, 10);
    return (result);
}

void my_put_floatpr(va_list ap, int *turn, int number)
{
    float nbr = va_arg(ap, double);

    my_put_float(nbr, turn, number);
}

float my_absf(float nbr)
{
    if (nbr < 0)
        nbr *= -1;
    return (nbr);
}

void my_put_float(float nbr, int *turn, int round)
{
    int nb = 0;
    static int x = 0;

    if (x == 0)
        nbr = my_round(nbr, round);
    nb = nbr;
    if (x > 0)
        nb = my_abs(nb % 10);
    my_put_nbr(nb, turn);
    if (x == 0)
        my_putchar('.', turn, 0);
    if (x < round || (x < 6 && round == 0)) {
        x++;
        my_put_float(nbr * 10, turn, round);
    }
    x = 0;
}
