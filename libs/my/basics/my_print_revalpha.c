/*
** EPITECH PROJECT, 2021
** My_print_revalpha
** File description:
** This function displays alphabet from z to a.
*/

#include "my_basics.h"

ssize_t my_print_revalpha(void)
{
    int letter = 'z';

    while (letter != 'a') {
        my_putchar(letter);
        letter--;
    }
    return (SUCCESS);
}
