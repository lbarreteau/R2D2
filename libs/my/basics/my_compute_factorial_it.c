/*
** EPITECH PROJECT, 2021
** My_compute_factorial_it
** File description:
** This script returns the factorial of the number given as a parameter.
*/

#include "my_basics.h"

int my_compute_factorial_it(int nb)
{
    int result = nb;

    if (nb < 0 || nb > 12) {
        return (0);
    } else if (nb == 0) {
        return (1);
    }
    while (nb > 1) {
        result = result * (nb - 1);
        nb--;
    }
    return (result);
}
