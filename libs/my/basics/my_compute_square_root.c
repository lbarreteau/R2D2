/*
** EPITECH PROJECT, 2021
** My_compute_square_root
** File description:
** This function returns the square root of the number given as argument.
*/

#include "my_basics.h"

ssize_t my_compute_square_root(int nb)
{
    int i = 1;
    int end_i = 0;

    while (end_i < nb) {
        end_i = i * i;
        if (end_i == nb) {
            return (i);
        }
        if (i > 46340) {
            return (ERROR);
        } else {
            i++;
        }
    }
    return (ERROR);
}
