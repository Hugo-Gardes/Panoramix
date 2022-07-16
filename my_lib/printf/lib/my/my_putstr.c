/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** put a string
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

void my_putstrpr_0(va_list ap, int *turn, int number)
{
    char *str = va_arg(ap, char *);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar('0', turn, 0);
    for (int x = 0; str[x] != 0; x++)
        my_putchar(str[x], turn, 0);
}

void my_putstrpr(va_list ap, int *turn, int number)
{
    char *str = va_arg(ap, char *);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar(' ', turn, 0);
    for (int x = 0; str[x] != 0; x++)
        my_putchar(str[x], turn, 0);
}

void my_putstr(char *str, int *turn, int number)
{
    (void)number;
    for (int x = 0; str[x] != 0; x++) {
        write(1, &str[x], 1);
        *turn += 1;
    }
}
