/*
** EPITECH PROJECT, 2021
** my_str_to_word_array
** File description:
** str to word
*/

#include <stdlib.h>

int my_strlen(char const *str);
int my_putchar(char c);

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *str = malloc(sizeof(char) * (len + 1));
    int i = 0;

    if (str == NULL) {
        return (NULL);
    }
    for (; i < len; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}

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
