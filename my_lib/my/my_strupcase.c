/*
** EPITECH PROJECT, 2024
** my_strupcase.c
** File description:
** strupcase
*/

#include "include/my.h"

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
}
