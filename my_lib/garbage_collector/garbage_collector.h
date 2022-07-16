/*
** EPITECH PROJECT, 2019
** garbage_collector.h
** File description:
** for garbage_collector function
*/

#ifndef GARBAGE_COLLECTOR_H_
    #define GARBAGE_COLLECTOR_H_

    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <string.h>

typedef struct garbage_collector_s garbage_collector_t;

struct garbage_collector_s {
    void *list;
    garbage_collector_t *next;
};

#endif
