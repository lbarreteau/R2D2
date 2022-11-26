/*
** EPITECH PROJECT, 2022
** Mem_alloc_2d_array
** File description:
** This function malloc an x * y array
*/

#include "my_basics.h"

char **mem_alloc_2d_array(int nb_rows , int nb_cols)
{
    char **buffer = malloc(sizeof(char *) * (nb_rows + 1));
    int i = 0;

    for (; i <= nb_rows; i++) {
        buffer[i] = malloc(sizeof(char) * (nb_cols + 1));
    }
    return buffer;
}
