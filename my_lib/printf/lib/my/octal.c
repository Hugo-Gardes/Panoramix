/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** octal.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../../include/my.h"

void conv_octal(int chara, int *turn)
{
    int result = 0;
    my_putchar(92, turn, 0);
    for (int e = 0; e < chara; e++)
        if (result % 10 == 7)
            result += 3;
        else
            result++;
    if (result < 10) {
        my_putchar('0', turn, 0);
        my_putchar('0', turn, 0);
    } else if (result / 10 != 0)
            my_putchar('0', turn, 0);
    my_put_nbr(result, turn);
}

void conv_octalc(va_list ap, int *turn, int number)
{
    long unsigned int num = va_arg(ap, long unsigned int);
    long unsigned int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 8)
        result[u] = num % 8 + 48;
    result[u] = 0;
    for (; number - my_strlen(result) > 0; number--)
        my_putchar('0', turn, 0);
    result = my_revstr(result);
    turn += my_printf("%s", result);
}
