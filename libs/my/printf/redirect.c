/*
** EPITECH PROJECT, 2021
** Percent_c
** File description:
** This script display a char.
*/

#include "my_basics.h"
#include "my_printf.h"

int redirect_first(char parameter, va_list ap, char *str, int z)
{
    switch (parameter) {
        case 'd' :
        case 'i' :
            percent_d(va_arg(ap, int));
            break;
        case 'o' :
            percent_o(va_arg(ap, int));
            break;
        case 'b' :
            percent_b(va_arg(ap, int));
            break;
        case 'l' :
            z++;
            parameter = str[z + 1];
            redirect_other(parameter, ap);
            break;
    }
    return (z);
}

int redirect_second(char parameter, va_list ap, int z)
{
    switch (parameter) {
        case 'u' :
            percent_u(va_arg(ap, int));
            break;
        case 'x' :
            percent_x(va_arg(ap, int));
            break;
        case 'X' :
            percent_maj_x(va_arg(ap, int));
            break;
        case 'c' :
            percent_c(va_arg(ap, int));
            break;
        case 's' :
            percent_s(va_arg(ap, char*));
            break;
    }
    return (z);
}

int redirect_third(char parameter, va_list ap, int z)
{
    switch (parameter) {
        case 'p' :
            my_putstr("0x");
            percent_x(va_arg(ap, int));
            break;
        case '%' :
            percent_percent();
            break;
        }
    return (z);
}
