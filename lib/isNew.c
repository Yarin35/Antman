/*
** EPITECH PROJECT, 2023
** isNew.c
** File description:
** isNew.c
*/

#include "lib.h"

bool isNew(char *target, char **context, int index)
{
    for (int i = index - 1; i >= 0; i --)
        if (strcmp(target, context[i]) == 0)
            return false;
    return true;
}
