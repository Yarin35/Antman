/*
** EPITECH PROJECT, 2023
** decompress_data.c
** File description:
** decompress_data.c
*/

#include "lib.h"

char *clean_data(char *data)
{
    char *cleaned_data = NULL;
    int index = 0;
    int len = 0;
    
    while (data[index] != '|' && data[index + 1] != '|')
        index ++;
    while (data[index ++] != '\0')
        len ++;
    cleaned_data = malloc(1 * len);
    if (cleaned_data == NULL)
        return NULL;
    index = 0;
    len = 0;
    while (data[index] != '|' && data[index + 1] != '|')
        index ++;
    while (data[index] != '\0')
        cleaned_data[len ++] = data[index ++];
    len --;
    cleaned_data[len] = '\0';
    return cleaned_data;
}

char *decompress_data(char *data, word_t **dico)
{
    char *outdata = NULL;
    char *indata = clean_data(data);
    char **ids = str_split(indata, " ");
    int total_len = 0;

    
    if (indata == NULL || ids == NULL)
        return NULL;
    for (int i = 0; ids[i + 1] != NULL; i ++) {
        total_len += my_strlen(get_word(atoi(ids[i]), dico));
        total_len ++;
    }
    outdata = malloc(1 * total_len);
    if (outdata == NULL)
        return NULL;
    for (int i = 0; ids[i + 1] != NULL; i ++) {
        outdata = strcat(outdata, my_strdup(get_word(atoi(ids[i]), dico)));
        outdata = strcat(outdata, " ");
    }
    return outdata;
}
