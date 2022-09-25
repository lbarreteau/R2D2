/*
** EPITECH PROJECT, 2021
** My_putchar
** File description:
** This script displays the character transmitted by the char.
*/

#include "my.h"

int my_putchar(char const c)
{
    write(1, &c, 1);
    return (SUCCESS);
}
