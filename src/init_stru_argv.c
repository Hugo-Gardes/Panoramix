/*
** EPITECH PROJECT, 2021
** B-CCP-400-MPL-4-1-panoramix-hugo.gardes
** File description:
** init_stru_argv.c
*/

#include "main.h"

argv_t init_stru_argv(char **argv)
{
    argv_t stru;
    stru.nbr_villagers = atoi(argv[1]);
    stru.pot_size = atoi(argv[2]);
    stru.nbr_fight = atoi(argv[3]);
    stru.nbr_refil = atoi(argv[4]);
    if (sem_init(&stru.sem, 0, 0))
        exit(84);
    return (stru);
}
