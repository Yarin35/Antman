/*
** EPITECH PROJECT, 2023
** get_word.c
** File description:
** get_word.c
*/

#include "lib.h"


char *get_word(int index, word_t **dico)
{
    for (int i = 0; dico[i] != NULL; i ++)
        if (index == dico[i]->index)
            return dico[i]->word;
    return NULL;
}
