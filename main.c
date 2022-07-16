/*
** EPITECH PROJECT, 2021
** B-CCP-400-MPL-4-1-panoramix-hugo.gardes
** File description:
** main.c
*/

#include "main.h"

void loop(argv_t *stru_argv, pthread_t *thread, villager_t **stru, arg_t *sgen)
{
    (*sgen).argv_ = stru_argv;
    (*sgen).good_id = -1;
    (*sgen).potion_left = stru_argv->pot_size;
    (*sgen).magic = 0;
    (*sgen).nbr_end = 0;
    if (pthread_mutex_init(&(*sgen).mutex, NULL))
        exit(84);
    for (int i = 0; i < stru_argv->nbr_villagers; i++) {
        ((stru)[i]) = my_malloc(sizeof(villager_t));
        ((stru)[i])->id = i;
        ((stru)[i])->stru_gen = sgen;
        ((stru)[i])->is_start = true;
        ((stru)[i])->nbr_fight = stru_argv->nbr_fight;
        pthread_create(&thread[i], NULL, villager, &stru[i]);
    }
    pthread_create(&thread[stru_argv->nbr_villagers], NULL, druid, sgen);
}

int main(int argc, char **argv)
{
    arg_t stru;
    pthread_t *thread;
    argv_t stru_argv;
    villager_t **villagers = NULL;

    error_handling(argc, argv);
    stru_argv = init_stru_argv(argv);
    thread = my_malloc(sizeof(pthread_t) * (stru_argv.nbr_villagers + 1));
    villagers = my_malloc(sizeof(villager_t *) * stru_argv.nbr_villagers);
    loop(&stru_argv, thread, villagers, &stru);
    for (int i = 0; i < stru_argv.nbr_villagers; i++)
        pthread_join(thread[i], NULL);
    pthread_mutex_destroy(&stru.mutex);
    sem_destroy(&stru_argv.sem);
    return (0);
}
