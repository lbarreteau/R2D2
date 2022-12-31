/*
** EPITECH PROJECT, 2021
** My_str_to_word_array
** File description:
** This function splits a string into words in a 2d array.
*/

#include <stdlib.h>
#include "my_basics.h"

static int check_alphanum(char const c)
{
    if (c == '\n')
        return (-1);
    else
        return (1);
}

char **my_str_to_word_array(char const *str)
{
    char **tab;
    int loca = 0;
    int j = 0;

    tab = malloc(sizeof(char *) * (my_strlen(str) + 1));
    if (tab == NULL)
        return (NULL);
    for (int i = 0; str[i] != '\0'; i++) {
        for (j = 0; check_alphanum(str[i + j]) == 1; j++);
        if (check_alphanum(str[i]) == 1) {
            tab[loca] = my_strdup(str + i);
            tab[loca][j] = '\0';
            loca++;
        }
        for (; str[i + j] != '\0' && check_alphanum(str[i + j]) == - 1; j++);
        j--;
        i = i + j;
    }
    tab[loca] = NULL;
    return (tab);
}
