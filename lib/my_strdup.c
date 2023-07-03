/*
** EPITECH PROJECT, 2023
** my_strdup.c
** File description:
** my_strdup
*/

#include "lib.h"

char* my_strdup(const char* target)
{
    size_t len = strlen(target);
    char* dup = malloc((len + 1) * sizeof(char));

    if (dup != NULL) {
        memcpy(dup, target, len);
        dup[len] = '\0';
    }

    return dup;
}
