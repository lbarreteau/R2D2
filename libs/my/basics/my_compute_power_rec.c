/*
** EPITECH PROJECT, 2021
** My_compute_power_rec
** File description:
** This script returns the first argument raised to the power p,
** where pis the second argument.
*/

#include "my_basics.h"

int my_compute_power_rec(int nb, int p)
{
    int result = 0;

    if (p < 0) {
        return (0);
    } else if (p == 0) {
        return (1);
    } else {
        result = nb * my_compute_power_rec(nb, p - 1);
    }
    return (result);
}
