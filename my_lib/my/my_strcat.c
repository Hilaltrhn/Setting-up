/*
** EPITECH PROJECT, 2024
** my_strcat.c
** File description:
** strcat
*/

#include "include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i;
    int len = my_strlen(dest);

    while (src[i] != '\0') {
        dest[len + i] = src[i];
        i++;
    }
    dest[i + len] = '\0';
    return dest;
}
