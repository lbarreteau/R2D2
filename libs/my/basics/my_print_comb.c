/*
** EPITECH PROJECT, 2021
** My_print_comb
** File description:
** This function displays in ascending order, all the
** different combinations of one-digit numbers.
*/

#include "my_basics.h"

static void display(int i1, int i2, int i3)
{
    if (i1 == 55 && i2 == 56 && i3 == 57) {
        my_putchar(i1);
        my_putchar(i2);
        my_putchar(i3);
    } else {
        my_putchar(i1);
        my_putchar(i2);
        my_putchar(i3);
        my_putstr(", ");
    }
}

static void init(int *i1, int *i2, int *i3)
{
    *i1 = 48;
    *i2 = 49;
    *i3 = 50;
}

ssize_t my_print_comb(void)
{
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;

    init(&i1, &i2, &i3);
    while (i3 <= 57) {
        display(i1, i2, i3);
        if (i3 == 57) {
            i2++;
            i3 = i2 + 1;
        } else {
            i3++;
        }
        if (i2 == 57) {
            i1++;
            i2 = i1 + 1;
            i3 = i2 + 1;
        }
    }
    return (SUCCESS);
}
