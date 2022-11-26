/*
** EPITECH PROJECT, 2021
** Search
** File description:
** This scirpt search different things.
*/

#include "my_basics.h"
#include "my_printf.h"

int search_percentage_number(char *str)
{
    int i = 0;
    int percentage_number = 0;

    while (str[i] != '\0') {
        if (str[i] == '%') {
            percentage_number++;
        }
        i++;
    }
    return (percentage_number);
}

void print_if_percent(char *str, va_list ap)
{
    char parameter;

    for (int z = 0; str[z] != '\0'; z++) {
        if (str[z] == '%') {
            parameter = str[z + 1];
            z = redirect_first(parameter, ap, str, z);
            z = redirect_second(parameter, ap, z);
            z = redirect_third(parameter, ap, z);
            z++;
        } else {
            my_putchar(str[z]);
        }
    }
}
