/*
** EPITECH PROJECT, 2021
** My_putstr
** File description:
** This function display characters of a string.
*/

#include <unistd.h>
#include "my_basics.h"

ssize_t my_putstr(char const *str)
{
    int size_str = 0;
    int return_value = 0;

    size_str = my_strlen(str);
    return_value = write(1, str, size_str);
    if (return_value == -1) {
        return (ERROR)
    }
    return (SUCCESS);
}
