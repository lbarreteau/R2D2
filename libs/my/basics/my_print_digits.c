/*
** EPITECH PROJECT, 2021
** My_print_digits
** File description:
** This function displays digits.
*/

#include "my_basics.h"

ssize_t my_print_digits(void)
{
    int i = '0';

    while (i <= '9') {
        my_putchar(i);
        i++;
    }
    return (SUCCESS);
}
