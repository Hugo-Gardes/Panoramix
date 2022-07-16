/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** count string size
*/

#include <stdarg.h>

int my_strlen(char const *str)
{
    if (str[1])
        return (1 + my_strlen(&str[1]));
    return (1);
}
