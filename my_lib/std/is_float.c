/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** is_float.c
*/

#include <stdbool.h>
#include <stdio.h>

bool not_in(char *str, char **tab, size_t size);
bool not_in_s(char *str, char *tab);
int my_count(char c, char *str);

bool is_float(char *str)
{
    if (not_in_s(str, "0123456789.-"))
        return (false);
    if (my_count('.', str) != 1 || my_count('-', str) > 1)
        return (false);
    return (true);
}
