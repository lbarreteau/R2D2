/*
** EPITECH PROJECT, 2021
** My_print_comb2
** File description:
** This function displays in ascending order, all the
** different combinations of two two-digit numbers.
*/

#include "my_basics.h"

static void condition(int a, int b, int c, int d)
{
    if (!(a == 9 && b == 8 && c == 9 && d == 9)) {
        my_putstr(", ");
    }
}

static int display_number(int a, int b, int c, int d)
{
    int convert_ascii = 48;

    while (c < 10) {
        d = b + 1;
        while (d < 10) {
            my_putchar(a + convert_ascii);
            my_putchar(b + convert_ascii);
            my_putchar(' ');
            my_putchar(c + convert_ascii);
            my_putchar(d + convert_ascii);
            condition(a, b, c, d);
            d++;
        }
        c++;
    }
    return (0);
}

ssize_t my_print_comb2(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    while (a < 10) {
        while (b < 9) {
            display_number(a, b, c, d);
            b++;
            c = 0;
        }
        a++;
        b = 0;
    }
    return (SUCCESS);
}
