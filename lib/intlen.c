/*
** EPITECH PROJECT, 2023
** intlen.c
** File description:
** intlen.c
*/

#include "lib.h"

int intlen(int num)
{
    int count = 0;

    if (num == 0)
        return 1;
    while (num > 0) {
        count ++;
        num /= 10;
    }
    return count;
}
