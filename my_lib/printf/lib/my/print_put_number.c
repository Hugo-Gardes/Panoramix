/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** print_put_number.c
*/

#include <unistd.h>
#include <stdarg.h>
#include "../../include/my.h"

void print_0(int number, int nb, int *turn)
{
    char *str = to_str_un(nb);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar('0', turn, 0);
}

void print_space(int number, int nb, int *turn)
{
    char *str = to_str_un(nb);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar(' ', turn, 0);
}

void printunl_0(int *number, unsigned int nb, int *turn)
{
    char *str = to_str_un(nb);
    int len = my_strlen(str);

    for (; *number - len > 0; *number -= 1)
        my_putchar('0', turn, 0);
}

void printunl_space(int number, unsigned int nb, int *turn)
{
    char *str = to_str_un(nb);
    int len = my_strlen(str);

    for (; number - len > 0; number--)
        my_putchar(' ', turn, 0);
}
