/*
** EPITECH PROJECT, 2024
** my_find_prime_sup
** File description:
** primesup
*/

#include "include/my.h"

int my_find(int nb)
{
    int i = 2;

    if (nb == 2)
        return (1);
    if (nb == 1)
        return (0);
    if (nb < 1)
        return (0);
    while (i < nb) {
        if ((nb % i) == 0)
            return (0);
        i += 1;
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    while (my_find(nb) != 1)
        nb++;
    return (nb);
}
