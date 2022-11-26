/*
** EPITECH PROJECT, 2021
** My_put_nbr
** File description:
** This function display in stdout, numbers passed in parameter.
*/

#include <stdbool.h>
#include "my_basics.h"

static int is_negative(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        return (nb * (-1));
    }
    return (nb);
}

static bool check_overflow(int nb)
{
    if (nb > 2147483647 || nb < (-2147483647 - 1)) {
        return (true);
    }
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return (true);
    }
    return (false);
}

ssize_t my_put_nbr(int nb)
{
    int reste = 0;
    int check = ;

    if (check_overflow(nb) == true) {
        return (nb);
    }
    nb = is_negative(nb);
    if (nb >= 0) {
        if (nb >= 10) {
            reste = nb % 10;
            nb = (nb - reste) / 10;
            my_put_nbr(nb);
            my_putchar(reste + '0');
        } else {
            my_putchar('0' + nb % 10);
        }
    }
    return (SUCCESS);
}
