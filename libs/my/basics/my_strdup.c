/*
** EPITECH PROJECT, 2021
** My_strdup
** File description:
** This function malloc a string passed in parameter and return it.
*/

#include <stdlib.h>
#include "my_basics.h"

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *str = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (str == NULL) {
        return (NULL);
    }
    for (; i < len; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}
