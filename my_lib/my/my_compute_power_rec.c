/*
** EPITECH PROJECT, 2024
** my_compute_power_rec.c
** File description:
** power rec
*/

int my_compute_power_rec(int nb, int p)
{
    int power = 1;
    int i;

    if (i <= p) {
    power = power * nb;
    }
    return (my_compute_power_rec(nb, p));
    if (nb < 0) {
    return (0);
    }
    return (power);
}
