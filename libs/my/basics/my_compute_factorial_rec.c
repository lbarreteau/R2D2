/*
** EPITECH PROJECT, 2021
** My_compute_factorial_rec
** File description:
** This function returns the factorial of the number given as a parameter.
*/

#include "my_basics.h"

ssize_t my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12) {
        return (ERROR);
    }
    if (nb == 0) {
        return (ERROR);
    }
    if (nb == 1) {
        return (1);
    }
    return (nb * my_compute_factorial_rec(nb - 1));
}
