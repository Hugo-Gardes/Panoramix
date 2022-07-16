/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** lib.h
*/

#ifndef __LIB_H__
    #define __LIB_H__

    #include <stdbool.h>
    #include <stdio.h>

void *my_malloc(size_t size);

int my_printf(char *str, ...);

int my_getnbr(char const *str);

char *to_str(int nb);

int my_strlen(char const *str);

int my_atoi(char *stc);

char *my_revstr(char *str);

int my_getnbr(char const *str);

int my_abs(int val);

bool is_float(char *str);

bool is_int(char *str);

int my_count(char c, char *str);

bool my_str_comp_c(char c, char *str2);

bool my_str_comp(char *str1, char *str2);

bool my_str_ncomp(char *str1, char *str2, int n);

bool not_in_s_c(char c, char *tab);

bool not_in_s(char *str, char *tab);

bool not_in_inta(int *nbr, int *tab, int size, int sizei);

bool not_in_int(int nbr, int *tab, int size);

bool not_in(char *str, char **tab, size_t size);

char *str_cpy(char **dest, char *src);

#endif