/*
** EPITECH PROJECT, 2020
** my_put_number
** File description:
** put number
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

int my_abs(int val);

void my_put_posnumberl_0(va_list ap, int *turn, int number)
{
    long unsigned int nb = va_arg(ap, long unsigned int);
    long unsigned int init = nb / 10;
    long unsigned int result = nb % 10;
    static int pass = 2;
    char resultf;

    printunl_0(&number, nb, turn);
    if (nb == 0 && --pass == 1)
        my_putchar('0', turn, 0);
    if (nb)
        my_put_nbr(nb / 10, turn);
    if (result) {
        resultf = my_abs(result) + '0';
        my_putchar(resultf, turn, 0);
    } else if (init)
        my_putchar('0', turn, 0);
    pass = 1;
}

void my_put_posnumber_0(va_list ap, int *turn, int number)
{
    unsigned int nb = va_arg(ap, unsigned int);
    unsigned int init = nb / 10;
    unsigned int result = nb % 10;
    static int pass = 2;
    char resultf;

    printun_0(number, nb, turn);
    if (nb == 0 && --pass == 1)
        my_putchar('0', turn, 0);
    if (nb)
        my_put_nbr(nb / 10, turn);
    if (result) {
        resultf = my_abs(result) + '0';
        my_putchar(resultf, turn, 0);
    } else if (init)
        my_putchar('0', turn, 0);
    pass = 1;
}

void my_put_posnumber(va_list ap, int *turn, int number)
{
    unsigned int nb = va_arg(ap, unsigned int);
    unsigned int init = nb / 10;
    unsigned int result = nb % 10;
    static int pass = 2;
    char resultf;

    printun_space(number, nb, turn);
    if (nb == 0 && --pass == 1)
        my_putchar('0', turn, 0);
    if (nb)
        my_put_nbr(nb / 10, turn);
    if (result) {
        resultf = my_abs(result) + '0';
        my_putchar(resultf, turn, 0);
    } else if (init)
        my_putchar('0', turn, 0);
    pass = 1;
}

int my_abs(int val)
{
    if (val < 0)
        val *= -1;
    return (val);
}
