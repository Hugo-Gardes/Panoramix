/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-mypkrintf-hugo.gardes
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

    #include <stdarg.h>
    #include <stdio.h>
    #include "structpr2.h"

void my_put_nbr(int nb, int *turn);

void format_in(int *in, char *str);

int my_strlen(char const *str);

int search_nbr_start(char const *str);

int size_of_number(char const *str, int start);

int my_atoi(char *stc);

int neg_f(char const *str);

void conv_octal(int chara, int *turn);

int if_long(don st, va_list ap, int number);

char *to_str_un(unsigned int nb);

void my_put_posnumber_0(va_list ap, int *turn, int number);

int zero_point(char *str, int *in, va_list ap, int *turn);

void my_putstrpr_0(va_list ap, int *turn, int number);

void my_putchar_0(va_list ap, int *turn, int number);

void my_putstrfull_0(va_list ap, int *turn, int number);

void my_put_posnumberl_0(va_list ap, int *turn, int number);

void print_0(int number, int nb, int *turn);

void print_space(int number, int nb, int *turn);

void printunl_0(int *number, unsigned int nb, int *turn);

void binnaire(va_list ap, int *turn, int number);

char *my_revstr(char *str);

void hexa_0_m(va_list ap, int *turn, int number);

don *ini(char *str, int *turn, int *in, int number);

void hexa_m(va_list ap, int *turn, int number);

void hexa_per(va_list ap, int *turn, int number);

void hexa_0_per(va_list ap, int *turn, int number);

void hexa(va_list ap, int *turn, int number);

void hexa_0(va_list ap, int *turn, int number);

void binnaire_0(va_list ap, int *turn, int number);

void printunl_space(int number, unsigned int nb, int *turn);

void my_put_nbrpr_0(va_list ap, int *turn, int number);

void printun_0(int number, unsigned int nb, int *turn);

void printun_space(int number, unsigned int nb, int *turn);

int gen(don st, va_list ap, int number);

int my_putchar(char chara, int *turn, int number);

void my_putstr(char *str, int *turn, int number);

int my_strlen(char const *str);

void my_put_float(float nbr, int *turn, int round);

int my_getnbr(char const *str);

void my_putcharpr(va_list ap, int *turn, int number);

void my_putstrpr(va_list ap, int *turn, int number);

void my_put_floatpr(va_list ap, int *turn, int number);

void my_put_nbrpr(va_list ap, int *turn, int number);

int my_printf(char *str, ...);

void my_put_posnumber(va_list ap, int *turn, int number);

void my_putstrfull(va_list ap, int *turn, int number);

void my_put_nbrprl(va_list ap, int *turn, int number);

void my_put_posnumberl(va_list ap, int *turn, int number);

void my_put_posnumberl_0(va_list ap, int *turn, int number);

void my_put_nbrl(long int nb, int *turn);

void conv_octalc(va_list ap, int *turn, int number);

char *to_str(int nb);

int my_abs(int val);

void *my_malloc(size_t size);

#endif