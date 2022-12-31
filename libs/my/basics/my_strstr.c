/*
** EPITECH PROJECT, 2021
** My strstr
** File description:
** This function returns a pointer to the first occurrence in haystack of any
** of the entire sequence of characters specified in needle, or a null pointer
** if the sequence is not present in haystack.
*/

#include "my_basics.h"

static int calcul(char *str, char const *to_find)
{
    for (int x = 0; to_find[x] != '\0'; x++) {
        if (to_find[x] != str[x]) {
            return (-1);
        }
    }
    return (0);
}

ssize_t my_strstr(char *str, char const *to_find)
{
    if (str[0] != '\0') {
        return (calcul(str, to_find));
    } else {
        return (84);
    }
}
