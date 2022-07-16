/*
** EPITECH PROJECT, 2020
** math
** File description:
** my_putstr_next.c
*/

#include <stdarg.h>
#include <unistd.h>
#include "../../include/my.h"

void my_putstrfull(va_list ap, int *turn, int number)
{
    char *str = va_arg(ap, char *);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar(' ', turn, 0);
    for (int x = 0; str[x] != 0; x++) {
        if (str[x] > 31) {
            *turn += 1;
            write(1, &str[x], 1);
        } else
            conv_octal(str[x], turn);
    }
}

void my_putstrfull_0(va_list ap, int *turn, int number)
{
    char *str = va_arg(ap, char *);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar('0', turn, 0);
    for (int x = 0; str[x] != 0; x++) {
        if (str[x] > 31) {
            *turn += 1;
            write(1, &str[x], 1);
        } else
            conv_octal(str[x], turn);
    }
}
