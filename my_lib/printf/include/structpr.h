/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** struct.h
*/

#ifndef STRUCTURE_H
    #define STRUCTURE_H

    #include "my.h"

typedef struct fonct {
    char chara;
    void (*fonction)(va_list, int *turn, int number);
} ap_fonct;

static const ap_fonct f_ap[] =
{
    {'s', my_putstrpr},
    {'c', my_putcharpr},
    {'C', my_putcharpr},
    {'o', conv_octalc},
    {'d', my_put_nbrpr},
    {'x', hexa_m},
    {'X', hexa},
    {'f', my_put_floatpr},
    {'S', my_putstrfull},
    {'u', my_put_posnumber},
    {'b', binnaire},
    {'i', my_put_nbrpr},
    {'p', hexa_per},
    {0, 0}
};

static const ap_fonct f_ap_0[] =
{
    {'s', my_putstrpr_0},
    {'c', my_putchar_0},
    {'C', my_putchar_0},
    {'d', my_put_nbrpr_0},
    {'S', my_putstrfull_0},
    {'u', my_put_posnumber_0},
    {'b', binnaire_0},
    {'f', my_put_floatpr},
    {'i', my_put_nbrpr_0},
    {'x', hexa_0_m},
    {'X', hexa_0},
    {'p', hexa_0_per},
    {0, 0}
};

static const ap_fonct fl[] =
{
    {'s', my_putstrpr},
    {'d', my_put_nbrprl},
    {0, 0}
};

static const ap_fonct fl_0[] =
{
    {'s', my_putstrpr_0},
    {'d', my_put_posnumberl_0},
    {0, 0}
};

#endif