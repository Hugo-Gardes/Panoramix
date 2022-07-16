/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_putchar.c
*/

#include <unistd.h>
#include <stdarg.h>

int my_putchar(char chara, int *turn, int number)
{
    (void)number;
    *turn += 1;
    write(1, &chara, 1);
    return (0);
}

void my_putchar_0(va_list ap, int *turn, int number)
{
    *turn += 1;

    for (; number - 1 > 0; number--)
        my_putchar('0', turn, 0);
    char chara = va_arg(ap, int);
    write(1, &chara, 1);
}

void my_putcharpr(va_list ap, int *turn, int number)
{
    *turn += 1;

    for (; number - 1 > 0; number--)
        my_putchar(' ', turn, 0);
    char chara = va_arg(ap, int);
    write(1, &chara, 1);
}
