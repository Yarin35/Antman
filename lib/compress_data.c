/*
** EPITECH PROJECT, 2023
** compress_data.c
** File description:
** compress_data.c
*/

#include "lib.h"

int get_total_len(word_t **dico, char *data)
{
    int len = 0;
    char **words = str_split(data, " \n");

    for (int i = 0; dico[i + 1] != NULL; i ++) {
        len += strlen(dico[i]->word);
        len += intlen(dico[i]->index);
    }
    len ++;

    for (int i = 0; words[i + 1] != NULL; i ++) {
        len += intlen(get_index(words[i], dico));
        len ++;
    }
    return len;
}

char *compress_data(word_t **dico, char *data)
{
    int total_len = get_total_len(dico, data);
    char *compressed = malloc(total_len + 1);
    char **words = str_split(data, " \n");
    char *index = NULL;

    for (int i = 0; dico[i + 1] != NULL; i ++) {
        index = int_to_str(dico[i]->index);
        strcat(compressed, dico[i]->word);
        strcat(compressed, index);
    }
    strcat(compressed, "||");
    for (int i = 0; words[i + 1] != NULL; i ++) {
        index = int_to_str(get_index(words[i], dico));
        strcat(compressed, index);
        strcat(compressed, " ");
    }
    compressed[total_len] = '\0';
    return compressed;
}
