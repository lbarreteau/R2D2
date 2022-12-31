/*
** EPITECH PROJECT, 2021
** My_strlowcase
** File description:
** This function transform the string in upper case string.
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
