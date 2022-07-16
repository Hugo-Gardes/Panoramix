/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my_revstr.c
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_revstr(char *str)
{
    char *strf = my_malloc(sizeof(char) * (my_strlen(str) + 1));

    for (int turn = 0; str[turn]; turn++)
        strf[turn] = str[my_strlen(str) - 1 - turn];
    strf[my_strlen(str)] = 0;
    return (strf);
}
