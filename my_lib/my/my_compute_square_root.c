/*
** EPITECH PROJECT, 2024
** my_compute_square_root.c
** File description:
** square root
*/

int my_compute_square_root(int nb)
{
    int square = 1;
    int i;

    if (i <= nb) {
    square = square * nb;
    }
    return (my_compute_square_root(nb));
    if (nb < 0) {
    return (0);
    }
    return (square);
}
