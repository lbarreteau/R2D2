/*
** EPITECH PROJECT, 2021
** My_compute_power_it
** File description:
** This script returns the first argument raised to the power p,
** where p is the second argument.
*/

#include "my_basics.h"

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0) {
        return (0);
    }
    while (p >= 1) {
        result = result * nb;
        p--;
    }
    return (result);
}
