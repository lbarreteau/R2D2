/*
** EPITECH PROJECT, 2021
** My_putstr
** File description:
** This script display one-by-one characters of a string.
*/

#include "my_basics.h"

int my_putstr(char const *str)
{
    int size_str = 0;

    size_str = my_strlen(str);
    write(1, str, size_str);
    return (SUCCESS);
}
