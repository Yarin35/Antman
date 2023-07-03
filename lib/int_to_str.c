/*
** EPITECH PROJECT, 2023
** int_to_str.c
** File description:
** int_to_str.c
*/

#include "lib.h"

char* int_to_str(int num)
{
    int numDigits = intlen(num);
    char* str = (char*)malloc((numDigits + 1) * sizeof(char));

    snprintf(str, numDigits + 1, "%d", num);

    return str;
}
