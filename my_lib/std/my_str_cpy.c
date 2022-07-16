/*
** EPITECH PROJECT, 2021
** B-NWP-400-MPL-4-1-myftp-hugo.gardes
** File description:
** my_str_cpy.c
*/

void str_cpy(char **dest, char *src)
{
    for (int i = 0; src[i]; i++)
        (*dest)[i] = src[i];
}
