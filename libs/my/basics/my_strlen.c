/*
** EPITECH PROJECT, 2021
** My_strlen
** File description:
** This function counts and returns the number of characters found.
*/

#include "my_basics.h"

ssize_t my_strlen(char const *str)
{
    int size_str = 0;

    while (str[size_str] != '\0') {
        size_str++;
    }
    return (size_str);
}
