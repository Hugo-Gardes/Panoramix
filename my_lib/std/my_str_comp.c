/*
** EPITECH PROJECT, 2021
** my_lib
** File description:
** my_str_comp.c
*/

#include <stdbool.h>

int my_strlen(char *str);

bool my_str_comp_c(char c, char *str2)
{
    for (int i = 0; str2[i]; i++)
        if (c != str2[i])
            return (false);
    return (true);
}

bool my_str_comp(char *str1, char *str2)
{
    if (my_strlen(str1) != my_strlen(str2)) {
        return (false);
    }
    for (int i = 0; str1[i]; i++)
        if (str1[i] != str2[i])
            return (false);
    return (true);
}

bool my_str_ncomp(char *str1, char *str2, int n)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);

    if (len1 < n || len2 < n)
        return (false);
    for (int i = 0; str1[i] && str2[i] && i < n; i++)
        if (str1[i] != str2[i])
            return (false);
    return (true);
}
