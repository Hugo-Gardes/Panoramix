/*
** EPITECH PROJECT, 2021
** B-CCP-400-MPL-4-1-panoramix-hugo.gardes
** File description:
** villager.c
*/

#include "main.h"

void drink(villager_t **stru)
{
    if (((*stru)->stru_gen->argv_->nbr_refil <= 0 && \
        (*stru)->stru_gen->potion_left <= 0 && (*stru)->nbr_fight <= \
        0 ) || (*stru)->nbr_fight <= 0)
            return;
    printf("Villager %d: I need a drink... ", (*stru)->id);
    printf("I see %d servings left.\n", ((*(*(*stru)).stru_gen).potion_left));
    if (((*(*(*stru)).stru_gen).potion_left) <= 0 && \
    ((*(*(*stru)).stru_gen).argv_->nbr_refil > 0)) {
        printf("Villager %d: Hey Pano wake up! ", (*stru)->id);
        printf("We need more potion.\n");
        sem_post(&((*(*(*stru)).stru_gen).argv_)->sem);
        usleep(100);
        sem_wait(&((*(*(*stru)).stru_gen).argv_)->sem);
    }
    ((*(*(*stru)).stru_gen).potion_left) -= 1;
    printf("Villager %d: Take that roman scum!", (*stru)->id);
    (*(*stru)).nbr_fight -= 1;
    printf(" Only %d left.\n", (((*(*stru)).nbr_fight)));
}

void fight(villager_t **stru)
{
    drink(stru);
}

void *villager(void *strub)
{
    villager_t **stru = (villager_t **)strub;
    if ((*stru)->is_start) {
        printf("Villager %d: Going into battle!\n", (*stru)->id);
        (*(*stru)).is_start = false;
    }
    while ((*stru)->nbr_fight > 0 && (*stru)->stru_gen->argv_->nbr_refil > 0) {
        usleep(500);
        pthread_mutex_lock(&((*stru)->stru_gen->mutex));
        if ((*stru)->stru_gen->argv_->nbr_refil <= 0 && \
        (*stru)->stru_gen->potion_left <= 0 && (*stru)->nbr_fight <= 0)
            break;
        fight(&(*stru));
        pthread_mutex_unlock(&((*stru)->stru_gen->mutex));
    }
    ((*(*stru)->stru_gen).nbr_end) += 1;
    pthread_mutex_unlock(&((*stru)->stru_gen->mutex));
    printf("Villager %d: I'm going to sleep now.\n", (*stru)->id);
    pthread_exit(0);
}
