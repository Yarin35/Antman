/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** my_strlen
*/

#include "lib.h"

int my_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0')
        count ++;
    return count;
}
