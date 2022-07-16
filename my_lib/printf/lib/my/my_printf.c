/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-mypnrintf-hugo.gardes
** File description:
** my_printf.c
*/

#include "../../include/my.h"
#include "../../include/structpr.h"
#include "../../include/structpr2.h"
#include <stdlib.h>
#include <stdarg.h>

int my_nbr_len(int nbr)
{
    char *str = to_str(nbr);
    return (my_strlen(str));
}

don *ini(char *str, int *turn, int *in, int number)
{
    don *temp = my_malloc(sizeof(don) * 1);
    temp->str = str;
    temp->in = in;
    temp->turn = turn;
    temp->number = number;
    return (temp);
}

int is_zero(int *in, char *str)
{
    int number = my_getnbr(str + *in);
    if (number != 0 || str[*in + 1] == '.') {
        if (str[my_strlen(to_str(number)) + 1] == '.' || str[*in + 1] == '.')
            return (0);
        if ((str[*in + 1] > 47 && str[*in + 1] < 58) && str[*in] == '0')
            return (0);
    }
    return (84);
}

int checkarg(int *turn, va_list ap, char *str, int *in)
{
    int is_long = 0;
    don *st;
    int number = 0;

    if (str[*in] == '%')
        return (my_putchar('%', turn, 0));
    if (is_zero(in, str) != 84)
        return (zero_point(str, in, ap, turn));
    if (str[*in] >= 48 && str[*in] <= 57) {
        number = my_getnbr(str + *in);
        *in += my_nbr_len(my_getnbr(str + *in));
    }
    st = ini(str, turn, in, number);
    if (str[*in] == 'l') {
        return (if_long(*st, ap, number));
    } else {
        return (gen(*st, ap, number));
    }
    return (is_long);
}

int my_printf(char *str, ...)
{
    int turn = 0;
    va_list ap;

    va_start(ap, str);
    for (int x = 0; str[x]; x++) {
        if (str[x] == '%' && str[x + 1] != 0) {
            x++;
            x += checkarg(&turn, ap, str, &x);
        } else
            my_putchar(str[x], &turn, 0);
    }
    va_end(ap);
    return (turn);
}
