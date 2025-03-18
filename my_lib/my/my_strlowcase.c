/*
** EPITECH PROJECT, 2024
** my_strlowcase.c
** File description:
** strlowcase
*/

#include "include/my.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] += 32;
        i++;
    }
    return (str);
}
