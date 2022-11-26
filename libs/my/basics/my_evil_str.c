/*
** EPITECH PROJECT, 2021
** My_evil_str
** File description:
** This function return a pointer to the first character
** of the reversed string.
*/

#include "my_basics.h"

char *my_evil_str(char *str)
{
    char c = ' ';
    int i = 0;
    int j = 0;

    j = my_strlen(str) - 1;
    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
    return (str);
}
