/*
** EPITECH PROJECT, 2021
** Percent_c
** File description:
** This script display a char.
*/

#include "my_basics.h"
#include "my_printf.h"

void redirect_other(char parameter, va_list ap)
{
    switch (parameter) {
        case 'd' :
        case 'i' :
            percent_long_d(va_arg(ap, int));
            break;
    }
}
