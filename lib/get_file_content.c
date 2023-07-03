/*
** EPITECH PROJECT, 2023
** get_file_content.c
** File description:
** to get the content of a given file
*/

#include "lib.h"


char *get_file_content(char *filepath)
{
    int fd = 0;
    char *data = NULL;
    struct stat stats;

    stat(filepath, &stats);
    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        return NULL;
    data = malloc(1 * stats.st_size + 1);
    read(fd, data, stats.st_size);
    data[stats.st_size] = '\0';
    close(fd);
    return data;
}
