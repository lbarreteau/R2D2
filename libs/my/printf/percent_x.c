/*
** EPITECH PROJECT, 2021
** Percent_x
** File description:
** This script display an int transform in base 10.
*/

#include "my_basics.h"
#include "my_printf.h"

static void conditional(int nb)
{
    if (nb <= 9 && nb >= 0) {
        my_put_nbr(nb);
    }
    if (nb <= 15 && nb >= 10) {
        my_putchar(nb + 87);
    }
}

void percent_x(int nb)
{
    char *res = malloc(sizeof(res));

    if (res == NULL)
        return;
    if (nb < 0) {
        nb = nb * -1;
    }
    conditional(nb);
    if (nb >= 16) {
        for (int i = 0; nb != 0; i++) {
            res[i] = (nb % 16) + '0';
            nb = nb / 16;
        }
    }
    my_revstr(res);
    my_putstr(res);
    free(res);
}
