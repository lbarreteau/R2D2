/*
** EPITECH PROJECT, 2021
** My_is_prime
** File description:
** This function returns true if the number is prime or false if not.
*/

#include <stdbool.h>
#include "my_basics.h"

bool my_is_prime(int nb)
{
    int count = 2;

    if (nb == 0 || nb == 1)
        return (true);
    while (count < nb) {
        if (nb % count == 0) {
            return (true);
        }
        count++;
    }
    return (false);
}
