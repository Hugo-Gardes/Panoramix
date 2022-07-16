/*
** EPITECH PROJECT, 2021
** B-CCP-400-MPL-4-1-panoramix-hugo.gardes
** File description:
** error_handling.c
*/

#include "main.h"

void help(void)
{
    printf("USAGE: ./panoramix <nb_villagers> <pot_size>");
    printf(" <nb_fights> <nb_refills>\n");
    exit(0);
}

void error_handling(int argc, char **argv)
{
    if (argc == 1 || my_str_comp(argv[1], "-h"))
        help();
    if (argc != 5)
        exit(84);
    for (int i = 1; i < argc; i++)
        if (!is_number_w0(argv[i]))
            exit(84);
}
