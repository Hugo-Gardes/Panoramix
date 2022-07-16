/*
** EPITECH PROJECT, 2021
** B-CCP-400-MPL-4-1-panoramix-hugo.gardes
** File description:
** druid.c
*/

#include "main.h"

void print_druid(arg_t *stru)
{
    printf("Druid: Ah! Yes, yes, I'm awake! Working on it! Beware I can ");
    printf("only make %d more ", (*stru).argv_->nbr_refil);
    printf("refills after this one.\n");
    if ((*stru).argv_->nbr_refil <= 0)
        printf("Druid: I'm out of viscum. I'm going back to... zZz\n");
    if ((*stru).argv_->nbr_refil < 0)
        exit(84);
}

void *druid(void *data)
{
    arg_t *stru = (arg_t *)data;

    printf("Druid: I'm ready... but sleepy...\n");
    do {
        do {
        sem_wait(&((*stru).argv_->sem));
        if ((*stru).potion_left)
            sem_post(&((*stru).argv_->sem));
        } while ((*stru).potion_left && \
        (*stru).nbr_end != (*stru).argv_->nbr_villagers);
        (*stru).argv_->nbr_refil -= 1;
        print_druid(stru);
        (*stru).potion_left = (*stru).argv_->pot_size;
        sem_post(&((*stru).argv_->sem));
    } while ((*stru).argv_->nbr_refil > 0 && (*stru).nbr_end != \
    (*stru).argv_->nbr_villagers);
    pthread_exit(0);
}
