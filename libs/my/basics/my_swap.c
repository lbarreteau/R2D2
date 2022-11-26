/*
** EPITECH PROJECT, 2021
** My_swap
** File description:
** This function swap two integers addresses in parameter.
*/

#include "my_basics.h"

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}
