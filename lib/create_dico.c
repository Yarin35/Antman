/*
** EPITECH PROJECT, 2023
** create_dico.c
** File description:
** create_dico.c
*/

#include "lib.h"

int get_unic_word_count(char *data)
{
    int count = 0;
    char **words = str_split(data, " \n");
    
    for (int i = 0; words[i] != NULL; i ++)
        if (isNew(words[i], words, i))
            count ++;
    return count;
}

word_t **create_dico(char *data)
{
    int unic_words = get_unic_word_count(data);
    word_t **dico = malloc(sizeof(word_t *) * unic_words + 1);
    char **words = str_split(data, " \n");
    int index = 0;

    for (int i = 0; words[i] != NULL; i ++) {
        if (isNew(words[i], words, i)) {
            dico[index] = malloc(sizeof(word_t));
            dico[index]->word = strdup(words[i]);
            dico[index]->index = index;
            index ++;
        }
    }
    dico[index] = NULL;
    return dico;
}
