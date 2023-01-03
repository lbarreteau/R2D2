/*
** EPITECH PROJECT, 2021
** My_strupcase
** File description:
** This function transform the string in upper case string.
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
