/*
** EPITECH PROJECT, 2021
** My_revstr
** File description:
** This script reverse the string and return it.
*/

#include "my_basics.h"

char *my_revstr(char *str)
{
    int size = 0;
    int temp = 0;
    int cond = 0;

    size = my_strlen(str) - 1;
    while (cond <= size / 2) {
        temp = str[cond];
        str[cond] = str[size - cond];
        str[size - cond] = temp;
        cond++;
    }
    str[size + 1] = '\0';
    return (str);
}
