/*
** EPITECH PROJECT, 2021
** My_show_array
** File description:
** This function splits a string into words in a 2d array.
*/

#include "my_basics.h"

void my_show_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++) {
        my_putstr(array[i]);
        my_putchar('\n');
    }
}
