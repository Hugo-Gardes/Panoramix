/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** my_printf_next.c
*/

#include "../../include/my.h"
#include "../../include/structpr.h"
#include "../../include/structpr2.h"
#include <stdarg.h>
#include <stdio.h>

int print_no_good_arg(int *in, char *str)
{
    int first;
    int second;
    int y;

    format_in(in, str);
    for (y = *in; str[y + 1] != '.'; y--);
    second = my_getnbr(&str[y]);
    for (; str[y - 1] != '%'; y--);
    first = my_getnbr(&str[y]);
    my_printf("%%%d.%d%c", first, second, str[*in]);
    return (1);
}

int zero_point_next(don *d, int x, va_list ap)
{
    if (d->str[*d->in] == 'l'){
        *d->in += 1;
        for (; fl_0[x].chara != d->str[*d->in] && fl_0[x].chara != 0; x++);
        if (fl_0[x].chara != 0)
            fl_0[x].fonction(ap, d->turn, d->number);
        return (1);
    } else {
        for (; f_ap_0[x].chara != d->str[*d->in] && f_ap_0[x].chara != 0; x++);
        if (f_ap_0[x].chara != 0) {
            f_ap_0[x].fonction(ap, d->turn, d->number);
        } else {
            print_no_good_arg(d->in, d->str);
        }
    }
    *d->in -= 1;
    return (1);
}

int zero_point(char *str, int *in, va_list ap, int *turn)
{
    int x = 0;
    int number = 0;
    don *donne;

    for (; str[*in] >= 48 && str[*in] <= 57 && str[*in]; *in += 1);
    if (str[*in] != '.') {
        *in -= 1;
        for (; str[*in] >= 48 && str[*in] <= 57 && str[*in]; *in -= 1);
    }
    *in += 1;
    number = my_getnbr(str + *in);
    for (; str[*in] >= 48 && str[*in] <= 57 && str[*in]; *in += 1);
    donne = ini(str, turn, in, number);
    return (zero_point_next(donne, x, ap));
}

int if_long(don st, va_list ap, int number)
{
    int x = 0;
    int is_long = 0;

    for (; fl[x].chara != st.str[*st.in + 1] && fl[x].chara != 0; x++);
    if (fl[x].chara != 0) {
        fl[x].fonction(ap, st.turn, number);
        is_long++;
    } else
        my_printf("%%%c", st.str[*st.in]);
    return (is_long);
}

int gen(don st, va_list ap, int number)
{
    int x = 0;

    for (; f_ap[x].chara != st.str[*st.in] && f_ap[x].chara != 0; x++);
    if (f_ap[x].chara != 0) {
        f_ap[x].fonction(ap, st.turn, number);
    } else {
        my_printf("%%%c", st.str[*st.in]);
    }
    return (0);
}
