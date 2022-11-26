/*
** EPITECH PROJECT, 2021
** My strncmp
** File description:
** to complete.
*/

#include "my_basics.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i <= (n - 1) && (s1[i] != '\0' || s2[i] != '\0'); i++) {
        if (s1[i] != s2[i]) {
            return (s1[i] - s2[i]);
        }
    }
    return (0);
}
