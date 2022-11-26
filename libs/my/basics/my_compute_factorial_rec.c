/*
** EPITECH PROJECT, 2021
** My_compute_factorial_rec
** File description:
** This script returns the factorial of the number given as a parameter.
*/

#include "my_basics.h"

int my_compute_factorial_rec(int nb)
{
    int result = 0;

    if (nb < 0 || nb > 12) {
        return (0);
    } else if (nb == 0) {
        return (1);
    } else {
        result = nb * my_compute_factorial_rec(nb - 1);
    }
    return (result);
}
