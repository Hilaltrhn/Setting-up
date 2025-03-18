/*
** EPITECH PROJECT, 2024
** my_isneg.c
** File description:
** NP
*/

#include "include/my.h"

int my_isneg(int n)
{
    if (n < 0){
    my_putchar('N');
    } else if (n >= 0) {
    my_putchar('P');
    }
    my_putchar('\n');
    return (0);
}
