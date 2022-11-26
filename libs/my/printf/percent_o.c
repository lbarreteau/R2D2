/*
** EPITECH PROJECT, 2021
** Percent_o
** File description:
** This script display a int transfrom in octal
*/

#include "my_basics.h"
#include "my_printf.h"

void percent_o(int nb)
{
    char *res = malloc(sizeof(res));

    if (res == NULL) {
        return;
    }
    if (nb < 0) {
        nb = nb * -1;
    }
    for (int i = 0; nb != 0; i++) {
        res[i] = (nb % 8) + '0';
        nb = nb / 8;
    }
    my_revstr(res);
    my_putstr(res);
    free(res);
}
