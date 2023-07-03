/*
** EPITECH PROJECT, 2023
** get_index.c
** File description:
** get_index.c
*/

#include "lib.h"

int get_index(char *target, word_t **dico)
{
    for (int i = 0; dico[i] != NULL; i ++)
        if (strcmp(target, dico[i]->word) == 0)
            return dico[i]->index;
    return 0;
}
