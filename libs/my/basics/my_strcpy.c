/*
** EPITECH PROJECT, 2021
** My_strcpy
** File description:
** This script copies a string into another and return it.
*/

#include "my_basics.h"

char *my_strcpy(char *dest , char const *src)
{
    int destination = 0;

    while (src[destination] != '\0') {
        dest[destination] = src[destination];
        destination++;
    }
    dest[destination] = '\0';
    return (dest);
}
