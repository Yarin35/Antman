/*
** EPITECH PROJECT, 2023
** build_dico.c
** File description:
** build_dico.c
*/

#include "lib.h"

word_t **build_dico(char *data)
{
    char **parts = malloc(sizeof(char *) * 2);
    char **words = NULL;
    word_t **dico = NULL;
    int count = 0;

    parts[0] = str_cut(data, "||");
    words = str_split(my_strdup(parts[0]), "0123456789");
    for (int i = 0; words[i] != NULL; i ++)
        count ++;
    dico = malloc(sizeof(word_t *) * count);
    for (int i = 0; i < count; i ++) {
        dico[i] = malloc(sizeof(word_t));
        dico[i]->word = my_strdup(words[i]);
        dico[i]->index = i;
    }
    dico[-- count] = NULL;
    return dico;
}
