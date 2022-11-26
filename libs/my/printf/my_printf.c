/*
** EPITECH PROJECT, 2021
** My_printf
** File description:
** This script is the my_printf.
*/

#include "my_basics.h"
#include "my_printf.h"

void my_printf(char *str, ...)
{
    va_list ap;
    va_start(ap, str);

    if (search_percentage_number(str) >= 1) {
        print_if_percent(str, ap);
    } else {
        my_putstr(str);
    }
    va_end(ap);
}
