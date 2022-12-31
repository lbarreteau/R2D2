/*
** EPITECH PROJECT, 2021
** My strncmp
** File description:
** This function compares two strings at n position and returns the difference
** between the first different characters.
*/

#include "my_basics.h"

ssize_t my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i <= (n - 1) && (s1[i] != '\0' || s2[i] != '\0'); i++) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
    }
    return (0);
}
