/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** my_put_number_next.c
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

void printun_0(int number, unsigned int nb, int *turn)
{
    char *str = to_str_un(nb);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar('0', turn, 0);
}

void my_put_nbr(int nb, int *turn)
{
    int init = nb / 10;
    int result = nb % 10;
    static int pass = 1;
    char resultf;

    if (nb == 0 && pass == 1)
        my_putchar('0', turn, 0);
    pass = 0;
    if (nb < 0 && !init)
        my_putchar('-', turn, 0);
    if (nb)
        my_put_nbr(nb / 10, turn);
    if (result) {
        resultf = my_abs(result) + '0';
        my_putchar(resultf, turn, 0);
    } else if (init)
        my_putchar('0', turn, 0);
    pass = 1;
}

void printun_space(int number, unsigned int nb, int *turn)
{
    char *str = to_str_un(nb);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar(' ', turn, 0);
}

void my_put_nbrpr_0(va_list ap, int *turn, int number)
{
    int nb = va_arg(ap, int);
    print_0(number, nb, turn);
    my_put_nbr(nb, turn);
}

void my_put_nbrpr(va_list ap, int *turn, int number)
{
    int nb = va_arg(ap, int);
    print_space(number, nb, turn);
    my_put_nbr(nb, turn);
}
