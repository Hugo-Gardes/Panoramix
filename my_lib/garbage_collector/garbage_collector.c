/*
** EPITECH PROJECT, 2020
** garbage colector
** File description:
** garbage_collector.c
*/

#include "garbage_collector.h"

garbage_collector_t *addptrgct(garbage_collector_t *gc, void *ptr)
{
    garbage_collector_t *node = malloc(sizeof(garbage_collector_t));
    garbage_collector_t **save = &gc;
    if (!gc) {
        gc = malloc(sizeof(garbage_collector_t));
        gc->list = ptr;
        gc->next = NULL;
        free(node);
    } else {
        while (gc->next)
            gc = gc->next;
        node->list = ptr;
        node->next = NULL;
        gc->next = node;
        gc = *save;
    }
    return (gc);
}

void *stat_save(void)
{
    static garbage_collector_t *garbage = NULL;
    if (garbage == NULL)
        garbage = addptrgct\
        (garbage, malloc(sizeof(short int)));
    return (garbage);
}

void __attribute__((destructor)) destroygc(void)
{
    garbage_collector_t *garbage_collector = stat_save();
    void *next = garbage_collector->next;
    while (garbage_collector->next) {
        free(garbage_collector->list);
        free(garbage_collector);
        garbage_collector = next;
        next = garbage_collector->next;
    }
    free(garbage_collector->list);
    free(garbage_collector);
}

void *my_malloc(size_t size)
{
    garbage_collector_t *garbage_collector = stat_save();
    void *address = malloc(size);

    garbage_collector = \
    addptrgct(garbage_collector, address);
    memset(address, 0, size);
    return (address);
}
