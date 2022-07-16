/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** my_percent_p.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../../include/my.h"

void hexa_per(va_list ap, int *turn, int number)
{
    unsigned long int num = va_arg(ap, unsigned long int);
    char hexaconv[] = "0123456789abcdef";
    unsigned long int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 16)
        result[u] = hexaconv[num % 16];
    result[u] = 0;
    for (; number - my_strlen(result) - 2 > 0; number--)
        my_putchar(' ', turn, 0);
    *turn += my_printf("0x");
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}

void hexa_0_per(va_list ap, int *turn, int number)
{
    unsigned long int num = va_arg(ap, unsigned long int);
    char hexaconv[] = "0123456789abcdef";
    long long int u = 0;
    char *result = my_malloc(sizeof(char) * (my_strlen(to_str(num)) * 10));
    for (; num > 0; u++, num /= 16)
        result[u] = hexaconv[num % 16];
    result[u] = 0;
    for (; number - my_strlen(result) - 2 > 0; number--)
        my_putchar('0', turn, 0);
    *turn += my_printf("0x");
    result = my_revstr(result);
    *turn += my_printf("%s", result);
}
