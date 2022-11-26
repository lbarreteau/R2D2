/*
** EPITECH PROJECT, 2021
** My_putchar
** File description:
** This function displays the character transmitted by parameter.
*/

#include <unistd.h>
#include "my_basics.h"

ssize_t my_putchar(char const c)
{
    write(1, &c, 1);
    return (SUCCESS);
}
