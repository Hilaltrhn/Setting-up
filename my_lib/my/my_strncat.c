/*
** EPITECH PROJECT, 2024
** my_strncat.c
** File description:
** strncat
*/

#include "include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int len = my_strlen(dest);

    while (src[i] != '\0' && i < nb) {
        dest[len + i] = src[i];
        i++;
    }
    dest[i + len] = '\0';
    return dest;
}
