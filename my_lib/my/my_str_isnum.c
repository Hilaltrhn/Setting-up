/*
** EPITECH PROJECT, 2024
** my_str_isnum.c
** File description:
** isnum
*/

#include "include/my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 0;
    if (str[0] == '-' || str[0] == '+')
        i++;
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}
