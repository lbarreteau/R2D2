/*
** EPITECH PROJECT, 2021
** Percent_u
** File description:
** This script display an unsigned int.
*/

#include "my_basics.h"
#include "my_printf.h"

void percent_u(int nb)
{
    if (nb < 0) {
        nb = nb * -1;
        my_put_nbr(nb);
    } else {
        my_put_nbr(nb);
    }
}
