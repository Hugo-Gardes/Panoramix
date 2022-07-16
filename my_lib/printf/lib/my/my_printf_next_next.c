/*
** EPITECH PROJECT, 2020
** B-PSU-100-MPL-1-1-myprintf-hugo.gardes
** File description:
** my_printf_next_next.c
*/

#include "../../include/my.h"
#include "../../include/structpr.h"
#include "../../include/structpr2.h"
#include <stdarg.h>
#include <stdio.h>

void format_in(int *in, char *str)
{
    int number = 0;
    if ((number = my_getnbr(str + *in)) != 0)
        if (str[my_strlen(to_str(number)) + 1] == '.')
            *in += my_strlen(to_str(number));
}
