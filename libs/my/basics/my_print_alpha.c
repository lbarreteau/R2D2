/*
** EPITECH PROJECT, 2021
** My_print_alpha
** File description:
** This function displays alphabet from a to z.
*/

#include "my_basics.h"

ssize_t my_print_alpha(void)
{
    int letter = 'a';

    while (letter <= 'z') {
        my_putchar(letter);
        letter++;
    }
    return (SUCCESS);
}
