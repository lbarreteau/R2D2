/*
** EPITECH PROJECT, 2022
** Main
** File description:
** This function is the main of the menger sponge
*/

#include <stdbool.h>

int main(int ac, char **av)
{
    if (check_arguments(ac, av) == false) {
        return (84);
    }
    printf("Hello World");
    return (0);
}