/*
** EPITECH PROJECT, 2021
** My_find_prime_sup
** File description:
** This function returns the smallest prime number that is greater
** than, or equal to, the number given as a parameter.
*/

#include "my_basics.h"

ssize_t my_find_prime_sup(int nb)
{
    int counter = 2;

    if (nb == 0 || nb == 1 || nb == 2) {
        return (ERROR);
    }
    while (counter < nb) {
        if (nb % counter == 0) {
            nb++;
        }
        counter++;
    }
    return (nb);
}
