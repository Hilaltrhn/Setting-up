/*
** EPITECH PROJECT, 2024
** my_getnbr.c
** File description:
** getnbr
*/

#include "include/my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int neg = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return nb * neg;
}
