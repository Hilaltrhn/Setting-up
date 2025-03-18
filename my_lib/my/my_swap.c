/*
** EPITECH PROJECT, 2024
** my_swap.c
** File description:
** swap
*/

void my_swap(int *a, int *b)
{
    int h;

    h = *a;
    *a = *b;
    *b = h;
}
