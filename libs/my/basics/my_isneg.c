/*
** EPITECH PROJECT, 2021
** My_isneg
** File description:
** This function return true or false according the number pass in parameter.
*/

#include <stdbool.h>
#include "my_basics.h"

bool my_isneg(int n)
{
    if (n >= 0) {
        return (true);
    } else {
        return (false);
    }
}
