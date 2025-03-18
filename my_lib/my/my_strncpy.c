/*
** EPITECH PROJECT, 2024
** my_strncpy.c
** File description:
** strn
*/

#include "include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    return dest;
}
