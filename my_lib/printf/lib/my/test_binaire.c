/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** test_binaire.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../../include/my.h"

void binnaire(va_list ap, int *turn, int number)
{
    unsigned int num = va_arg(ap, unsigned int);
    int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 2)
        result[u] = num%2 + 48;
    result[u] = 0;
    for (; number - my_strlen(result) > 0; number--)
        my_putchar(' ', turn, 0);
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}

void binnaire_0(va_list ap, int *turn, int number)
{
    unsigned int num = va_arg(ap, unsigned int);
    int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 2)
        result[u] = num % 2 + 48;
    result[u] = 0;
    for (; number - my_strlen(result) > 0; number--)
        my_putchar('0', turn, 0);
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}
