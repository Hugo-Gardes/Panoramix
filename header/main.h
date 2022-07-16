/*
** EPITECH PROJECT, 2021
** B-CCP-400-MPL-4-1-panoramix-hugo.gardes
** File description:
** main.h
*/

#ifndef main_h
    #define main_h

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    #include <pthread.h>
    #include <unistd.h>
    #include <semaphore.h>
    #include "lib.h"

typedef struct villager_s villager_t;
typedef struct arg_s arg_t;
typedef struct argv_s argv_t;

struct argv_s {
    int nbr_villagers;
    int nbr_fight;
    int nbr_refil;
    int pot_size;
    sem_t sem;
};

struct arg_s {
    int nbr_end;
    int potion_left;
    argv_t *argv_;
    int good_id;
    pthread_mutex_t mutex;
    int magic;
};

struct villager_s {
    arg_t *stru_gen;
    bool is_start;
    int nbr_fight;
    int id;
};

/* villager.c */

void *villager(void *stru);

/* end */

/* init_stru_argv.c */

argv_t init_stru_argv(char **argv);

/* end */

/* garbage_collector.c */

void *my_malloc(size_t size);

/* end */

/* error_handling.c */

void error_handling(int argc, char **argv);

/* end */

/* lib.c */

bool is_number_w0(char *str);
bool my_str_comp(char *str1, char *str2);

/* end */

/* druid.c */

void *druid(void *data);

/* end */

#endif
