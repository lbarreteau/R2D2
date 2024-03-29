/*
** EPITECH PROJECT, 2021
** My_compute_factorial_it
** File description:
** This function returns the factorial of the number given as a parameter.
*/

#include "my_basics.h"

ssize_t my_compute_factorial_it(int nb)
{
    int result = nb;

    if (nb < 0 || nb > 12) {
        return (ERROR);
    } else if (nb == 0) {
        return (ERROR);
    }
    while (nb > 1) {
        result = result * (nb - 1);
        nb--;
    }
    return (result);
}
