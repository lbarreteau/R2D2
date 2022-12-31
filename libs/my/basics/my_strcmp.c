/*
** EPITECH PROJECT, 2021
** My_strcmp
** File description:
** This function compares two strings and returns the difference between the
** first different characters.
*/

#include "my_basics.h"

ssize_t my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) {
        i++;
    }
    return (s1[i] - s2[i]);
}
