/*
** EPITECH PROJECT, 2022
** Check arguments
** File description:
** This functions is used to check arguments.
*/

#include <stdbool.h>
#include <stddef.h>

static bool check_nb_of_arguments(int ac)
{
    if (ac != 3) {
        return (false);
    }
    return (true);
}

static bool check_if_args_not_null(int ac, char **av)
{
    for (int i = 0; i != ac; i++) {
        if (av[i] == NULL) {
            return (false);
        }
    }
    return (true);
}

static bool check_if_is_multiple_of_3(char *str)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        nb += str[i] - '0';
    }
    if (nb % 3 == 0) {
        return (true);
    }
    return (false);
}

bool arguments_are_good(int ac, char **av)
{
    if (check_nb_of_arguments(ac) == false) {
        return (false);
    }
    if (check_if_args_not_null(ac, av) == false) {
        return (false);
    }
    if (check_if_is_multiple_of_3(av[1]) == false) {
        return (false);
    }
    return (true);
}