/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** not_in.c
*/

#include <stdbool.h>
#include <stdio.h>

int my_strlen(char *str);
bool my_str_comp(char *str1, char *str2);

bool not_in_inta(int *nbr, int *tab, int size, int sizei)
{
    bool is_good = true;

    for (int i = 0; i < size && is_good; i++)
        if (nbr[sizei] == tab[i])
            is_good = false;
    if (sizei && !is_good)
        return (not_in_inta(nbr, tab, size, sizei - 1));
    return (is_good);
}

bool not_in_int(int nbr, int *tab, int size)
{
    for (int i = 0; i < size; i++)
        if (nbr == tab[i])
            return (false);
    return (true);
}

bool not_in(char *str, char **tab, size_t size)
{
    for (size_t i = 0; i < size; i++) {
        if (my_str_comp(str, tab[i]))
            return (false);
    }
    return (true);
}
