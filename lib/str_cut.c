/*
** EPITECH PROJECT, 2023
** str_cut.c
** File description:
** cut and return a string (str) until del is find (in str)
*/

#include "lib.h"

bool isItThere(char *context, char *target, int index)
{
    int i = 0;

    while (target[i] == context[index]) {
        i ++;
        index ++;
    }
    if (i == (int)strlen(target))
        return true;
    else
        return false;
}

int count_len(char *str, char *del)
{
    int count = 0;

    while (!isItThere(str, del, count))
        count ++;
    return count;
}

char *str_cut(char *str, char *del)
{
    int len = count_len(str, del);
    char *result = malloc(1 * (len + 1));
    int index = 0;

    while (!isItThere(str, del, index)) {
        result[index] = str[index];
        index ++;
    }
    result[len] = '\0';
    return result;
}
