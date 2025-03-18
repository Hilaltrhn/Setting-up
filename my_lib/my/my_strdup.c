/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** my_strdup.c
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/my.h"

char *my_strdup(const char *src)
{
    int len = my_strlen(src);
    char *dup = malloc(len + 1);
    int i = 0;

    if (!dup) {
        return NULL;
    }
    for (; src[i] != '\0'; i++) {
        dup[i] = src[i];
    }
    dup[i] = '\0';
    return dup;
}
