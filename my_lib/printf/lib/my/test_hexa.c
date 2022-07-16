/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** test_hexa.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../../include/my.h"

void hexa_m(va_list ap, int *turn, int number)
{
    unsigned int num = va_arg(ap, unsigned int);
    char hexaconv[] = "0123456789abcdef";
    unsigned int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 16)
        result[u] = hexaconv[num % 16];
    result[u] = 0;
    for (; number - my_strlen(result) > 0; number--)
        my_putchar(' ', turn, 0);
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}

void hexa(va_list ap, int *turn, int number)
{
    unsigned int num = va_arg(ap, unsigned int);
    char hexaconv[] = "0123456789ABCDEF";
    unsigned int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 16)
        result[u] = hexaconv[num % 16];
    result[u] = 0;
    for (; number - my_strlen(result) > 0; number--)
        my_putchar(' ', turn, 0);
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}

void hexa_0_m(va_list ap, int *turn, int number)
{
    unsigned int num = va_arg(ap, unsigned int);
    char hexaconv[] = "0123456789abcdef";
    long int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 16)
        result[u] = hexaconv[num % 16];
    result[u] = 0;
    for (; number - my_strlen(result) > 0; number--)
        my_putchar('0', turn, 0);
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}

void hexa_0(va_list ap, int *turn, int number)
{
    unsigned int num = va_arg(ap, unsigned int);
    char hexaconv[] = "0123456789ABCDEF";
    long int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 16)
        result[u] = hexaconv[num % 16];
    result[u] = 0;
    for (; number - my_strlen(result) > 0; number--)
        my_putchar('0', turn, 0);
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}
