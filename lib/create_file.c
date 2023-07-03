/*
** EPITECH PROJECT, 2023
** create_file.c
** File description:
** create_file.c
*/

#include "lib.h"

int create_file(char *data, char *filename)
{
    int fd = open(filename, O_RDWR | O_CREAT, 00644);
    int len = strlen(data);

    if (fd == -1) {
        printf("Failed to create file\n");
        return 84;
    }
    write(fd, data, len);
    printf("data written succesfully :) !\n");
    return 0;
}
