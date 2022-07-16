/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** my_count.c
*/

#include <stdbool.h>

int my_count(char c, char *str)
{
    int nbr_c = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            nbr_c++;
    return (nbr_c);
}
