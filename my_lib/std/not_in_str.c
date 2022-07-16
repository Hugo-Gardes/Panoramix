/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** not_in_str.c
*/

#include <stdbool.h>
#include <stdio.h>

bool my_str_comp_c(char c, char *str2);
int my_strlen(char *str);

bool not_in_s_c(char c, char *tab)
{
    for (int i = 0; tab[i]; i++)
        if (c == tab[i])
            return (false);
    return (true);
}

bool not_in_s(char *str, char *tab)
{
    bool is_good = true;

    for (int i = 0; tab[i] && is_good; i++)
        if (str[0] == tab[i])
            is_good = false;
    if (str[1] && !is_good)
        return (not_in_s(&str[1], tab));
    return (is_good);
}
