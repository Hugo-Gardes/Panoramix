/*
** EPITECH PROJECT, 2021
** B-CCP-400-MPL-4-1-panoramix-hugo.gardes
** File description:
** lib.c
*/

#include "main.h"

bool is_number_w0(char *str)
{
    int len = strlen(str);

    if (len == 1 && str[0] == '0')
        return (false);
    for (int i = 0; i < len; i++)
        if (str[i] < 47 || str[i] > 57)
            return (false);
    return (true);
}
