/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** my_putnbrl.c
*/

#include <stdarg.h>
#include "../../include/my.h"

void my_put_nbrlpos(long unsigned int nb, int *turn);

void my_put_nbrprl(va_list ap, int *turn, int number)
{
    long int nb = va_arg(ap, long int);
    (void)number;
    my_put_nbrl(nb, turn);
}

void my_put_posnumberl(va_list ap, int *turn, int number)
{
    long int nb = va_arg(ap, long int);
    printunl_space(number, nb, turn);
    my_put_nbrlpos(nb, turn);
}

void my_put_nbrl(long int nb, int *turn)
{
    long int init = nb / 10;
    long int result = nb % 10;
    static int pass = 1;
    char resultf;

    if (nb == 0 && pass == 1)
        my_putchar('0', turn, 0);
    pass = 0;
    if (nb < 0 && !init)
        my_putchar('-', turn, 0);
    if (nb)
        my_put_nbrl(nb / 10, turn);
    if (result) {
        resultf = my_abs(result) + '0';
        my_putchar(resultf, turn, 0);
    } else if (init)
        my_putchar('0', turn, 0);
    pass = 1;
}

void my_put_nbrlpos(long unsigned int nb, int *turn)
{
    long unsigned int init = nb / 10;
    long unsigned int result = nb % 10;
    static int pass = 2;
    char resultf;

    if (nb == 0 && --pass == 1)
        my_putchar('0', turn, 0);
    if (nb)
        my_put_nbrlpos(nb / 10, turn);
    if (result) {
        resultf = my_abs(result) + '0';
        my_putchar(resultf, turn, 0);
    } else if (init)
        my_putchar('0', turn, 0);
    pass = 1;
}
