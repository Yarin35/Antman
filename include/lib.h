/*
** EPITECH PROJECT, 2023
** lib.h
** File description:
** lib.h
*/

#ifndef LIB_H
    #define LIB_H

    #include <stdio.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>

typedef struct word_s {

    char *word;
    int index;

} word_t;

char *get_file_content(char *filepath);
void *my_calloc(size_t type, size_t size);
char **str_split(char *str, char *seps);
int get_unic_word_count(char *data);
word_t **create_dico(char *data);
bool isNew(char *target, char **context, int index);
int get_index(char *target, word_t **dico);
int get_total_len(word_t **dico, char *data);
char *compress_data(word_t **dico, char *data);
int intlen(int num);
char* int_to_str(int num);
int create_file(char *data, char *filename);
word_t **build_dico(char *data);
char **str_split_2(char *str, char *seps);
char *decompress_data(char *data, word_t **dico);
char *get_word(int index, word_t **dico);
char *my_strdup(const char *target);
int my_strlen(char *str);
char *str_cut(char *str, char *del);
#endif
