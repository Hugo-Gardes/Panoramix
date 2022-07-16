/*
** EPITECH PROJECT, 2020
** lib
** File description:
** my_getnbr.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"
#include <unistd.h>

int my_getnbr(char const *str)
{
    int nbs = search_nbr_start(str);
    int slot_definition = 0;
    char strf[size_of_number(str, nbs) + 1];
    int neg = neg_f(str);
    int final_number;

    if ((str[0] < 48 || str[0] > 57) && str[0] != 45 && str[0] != 43)
        return (0);
    for (; str[nbs] >= 48 && str[nbs] <= 57; nbs++) {
        strf[slot_definition] = str[nbs];
        slot_definition++;
    }
    strf[slot_definition] = 0;
    final_number = my_atoi(strf);
    if (final_number > 2147483647 || final_number < -2147483647)
        return (1);
    else
        return (final_number * neg);
}

int search_nbr_start(char const *str)
{
    int nbsc = 0;
    for (; str[nbsc] < 48 || str[nbsc] > 57; nbsc++);
    return (nbsc);
}

int neg_f(char const *str)
{
    int moins = 0;

    for (int x = 0; str[x] == 45 || str[x] == 43; x++)
        if (str[x] == 45)
            moins++;
    if (moins % 2 == 0)
        return (1);
    else
        return (-1);
}

int size_of_number(char const *str, int start)
{
    int search_size = 0;

    for (; str[start] >= 48 && str[start] <= 57; start++)
        search_size++;
    return (search_size);
}

int my_atoi(char *stc)
{
    int sls = 0;
    int string_size = my_strlen(stc);
    int slot_int = 0;
    long int multiply = 1;
    int number[string_size];
    int final_number = 0;

    for (; stc[sls] >= 48 && stc[sls] <= 57; sls++, slot_int++)
        number[slot_int] = stc[sls] - '0';
    for (int execution = 0; execution < string_size; execution++)
        multiply *= 10;
    multiply /= 10;
    slot_int = 0;
    for (; multiply != 0; multiply /= 10, slot_int++)
        final_number += number[slot_int] * multiply;
    return (final_number);
}
