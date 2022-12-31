/*
** EPITECH PROJECT, 2021
** My_strncpy
** File description:
** This function copy the string at n position in src in the string dest with
** the old string.
*/

#include "my_basics.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return (dest);
}
