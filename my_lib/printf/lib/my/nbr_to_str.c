/*
** EPITECH PROJECT, 2020
** B-CPE-101-MPL-1-1-evalexpr-hugo.gardes
** File description:
** str_t_s.c
*/

#include <stdlib.h>
#include "../../include/my.h"

char *to_str(int nb)
{
    int x = 0;
    int x_save;
    int nb_s = nb;
    char *strf;

    for (; nb; nb /= 10, x++);
    x_save = x;
    strf = my_malloc(sizeof(char) * (x + 10));
    if (nb_s < 0) {
        nb_s = -nb_s;
        strf[0] = '-';
        x_save++;
    }
    for (int i = 0; i < x; nb_s /= 10, i++)
        strf[x_save - i - 1] = (nb_s % 10) + 48;
    strf[x_save] = 0;
    return (strf);
}

char *to_str_un(unsigned int nb)
{
    unsigned int x = 0;
    unsigned int x_save;
    unsigned int nb_s = nb;
    char *strf;

    for (; nb; nb /= 10, x++);
    x_save = x;
    strf = my_malloc(sizeof(char) * (x + 2));
    for (unsigned int i = 0; i < x; nb_s /= 10, i++)
        strf[x_save - i - 1] = (nb_s % 10) + 48;
    if (x_save % 2 == 0)
        strf[x_save + 1] = 0;
    else
        strf[x_save] = 0;
    return (strf);
}
