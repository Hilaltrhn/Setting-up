/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** str
*/

#include "include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
    my_putchar(src[i]);
    i++;
    }
    dest[0] = src[0];
    return (dest);
}
