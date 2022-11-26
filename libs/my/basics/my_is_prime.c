/*
** EPITECH PROJECT, 2021
** My_is_prime
** File description:
** This script returns 1 if the number is prime and 0 if not.
*/

#include "my_basics.h"

int my_is_prime(int nb)
{
    int count = 2;

    if (nb == 0 || nb == 1)
        return (0);
    while (count < nb) {
        if (nb % count == 0) {
            return (0);
        }
        count++;
    }
    return (1);
}
