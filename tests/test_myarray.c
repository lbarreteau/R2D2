/*
** EPITECH PROJECT, 2021
** Unit-test Lib My
** File description:
** This script test the libmy library
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_array.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
// Testing My_alloc_2d_array
Test(my_alloc_2d_array, simple)
{
    char **buffer = my_alloc_2d_array(2, 2);
    buffer[0][0] = 'a';
    buffer[0][1] = 'b';
    buffer[1][0] = 'c';
    buffer[1][1] = 'd';
    cr_assert_str_eq(buffer[0], "ab");
    cr_assert_str_eq(buffer[1], "cd");
    free(buffer[0]);
    free(buffer[1]);
    free(buffer);
}

Test(my_alloc_2d_array, simple2)
{
    char **buffer = my_alloc_2d_array(3, 3);
    buffer[0][0] = 'a';
    buffer[0][1] = 'b';
    buffer[0][2] = 'c';
    buffer[1][0] = 'd';
    buffer[1][1] = 'e';
    buffer[1][2] = 'f';
    buffer[2][0] = 'g';
    buffer[2][1] = 'h';
    buffer[2][2] = 'i';
    cr_assert_str_eq(buffer[0], "abc");
    cr_assert_str_eq(buffer[1], "def");
    cr_assert_str_eq(buffer[2], "ghi");
    free(buffer[0]);
    free(buffer[1]);
    free(buffer[2]);
    free(buffer);
}

Test(my_alloc_2d_array, middle)
{
    char **buffer = my_alloc_2d_array(5, 5);
    buffer[0][0] = 'a';
    buffer[0][1] = 'b';
    buffer[0][2] = 'c';
    buffer[0][3] = 'd';
    buffer[0][4] = 'e';
    buffer[1][0] = 'f';
    buffer[1][1] = 'g';
    buffer[1][2] = 'h';
    buffer[1][3] = 'i';
    buffer[1][4] = 'j';
    buffer[2][0] = 'k';
    buffer[2][1] = 'l';
    buffer[2][2] = 'm';
    buffer[2][3] = 'n';
    buffer[2][4] = 'o';
    buffer[3][0] = 'p';
    buffer[3][1] = 'q';
    buffer[3][2] = 'r';
    buffer[3][3] = 's';
    buffer[3][4] = 't';
    buffer[4][0] = 'u';
    buffer[4][1] = 'v';
    buffer[4][2] = 'w';
    buffer[4][3] = 'x';
    buffer[4][4] = 'y';
    cr_assert_str_eq(buffer[0], "abcde");
    cr_assert_str_eq(buffer[1], "fghij");
    cr_assert_str_eq(buffer[2], "klmno");
    cr_assert_str_eq(buffer[3], "pqrst");
    cr_assert_str_eq(buffer[4], "uvwxy");
    free(buffer[0]);
    free(buffer[1]);
    free(buffer[2]);
    free(buffer[3]);
    free(buffer[4]);
    free(buffer);
}

Test(my_alloc_2d_array, hard)
{
    char **buffer = my_alloc_2d_array(9, 10);
    buffer[0][0] = 'a';
    buffer[0][1] = 'b';
    buffer[0][2] = 'c';
    buffer[0][3] = 'd';
    buffer[0][4] = 'e';
    buffer[0][5] = 'f';
    buffer[0][6] = 'g';
    buffer[0][7] = 'h';
    buffer[0][8] = 'i';
    buffer[0][9] = 'j';
    buffer[1][0] = 'k';
    buffer[1][1] = 'l';
    buffer[1][2] = 'm';
    buffer[1][3] = 'n';
    buffer[1][4] = 'o';
    buffer[1][5] = 'p';
    buffer[1][6] = 'q';
    buffer[1][7] = 'r';
    buffer[1][8] = 's';
    buffer[1][9] = 't';
    buffer[2][0] = 'u';
    buffer[2][1] = 'v';
    buffer[2][2] = 'w';
    buffer[2][3] = 'x';
    buffer[2][4] = 'y';
    buffer[2][5] = 'z';
    buffer[2][6] = 'A';
    buffer[2][7] = 'B';
    buffer[2][8] = 'C';
    buffer[2][9] = 'D';
    buffer[3][0] = 'E';
    buffer[3][1] = 'F';
    buffer[3][2] = 'G';
    buffer[3][3] = 'H';
    buffer[3][4] = 'I';
    buffer[3][5] = 'J';
    buffer[3][6] = 'K';
    buffer[3][7] = 'L';
    buffer[3][8] = 'M';
    buffer[3][9] = 'N';
    buffer[4][0] = 'O';
    buffer[4][1] = 'P';
    buffer[4][2] = 'Q';
    buffer[4][3] = 'R';
    buffer[4][4] = 'S';
    buffer[4][5] = 'T';
    buffer[4][6] = 'U';
    buffer[4][7] = 'V';
    buffer[4][8] = 'W';
    buffer[4][9] = 'X';
    buffer[5][0] = 'Y';
    buffer[5][1] = 'Z';
    buffer[5][2] = '1';
    buffer[5][3] = '2';
    buffer[5][4] = '3';
    buffer[5][5] = '4';
    buffer[5][6] = '5';
    buffer[5][7] = '6';
    buffer[5][8] = '7';
    buffer[5][9] = '8';
    buffer[6][0] = '9';
    buffer[6][1] = '0';
    buffer[6][2] = '!';
    buffer[6][3] = '@';
    buffer[6][4] = '#';
    buffer[6][5] = '$';
    buffer[6][6] = '%';
    buffer[6][7] = '^';
    buffer[6][8] = '&';
    buffer[6][9] = '*';
    buffer[7][0] = '(';
    buffer[7][1] = ')';
    buffer[7][2] = '-';
    buffer[7][3] = '_';
    buffer[7][4] = '=';
    buffer[7][5] = '+';
    buffer[7][6] = '[';
    buffer[7][7] = ']';
    buffer[7][8] = '{';
    buffer[7][9] = '}';
    buffer[8][0] = '\\';
    buffer[8][1] = '|';
    buffer[8][2] = ';';
    buffer[8][3] = ':';
    buffer[8][4] = '\'';
    buffer[8][5] = '"';
    buffer[8][6] = ',';
    buffer[8][7] = '.';
    buffer[8][8] = '<';
    buffer[8][9] = '>';
    cr_assert_str_eq(buffer[0], "abcdefghij");
    cr_assert_str_eq(buffer[1], "klmnopqrst");
    cr_assert_str_eq(buffer[2], "uvwxyzABCD");
    cr_assert_str_eq(buffer[3], "EFGHIJKLMN");
    cr_assert_str_eq(buffer[4], "OPQRSTUVWX");
    cr_assert_str_eq(buffer[5], "YZ12345678");
    cr_assert_str_eq(buffer[6], "90!@#$%^&*");
    cr_assert_str_eq(buffer[7], "()-_=+[]{}");
    cr_assert_str_eq(buffer[8], "\\|;:'\",.<>");
    for (int i = 0; i < 9; i++) {
        free(buffer[i]);
    }
    free(buffer);
}

Test(my_alloc_2d_array, hard2)
{
    char **buffer = my_alloc_2d_array(3, 25);
    buffer[0][0] = 'a';
    buffer[0][1] = 'b';
    buffer[0][2] = 'c';
    buffer[0][3] = 'd';
    buffer[0][4] = 'e';
    buffer[0][5] = 'f';
    buffer[0][6] = 'g';
    buffer[0][7] = 'h';
    buffer[0][8] = 'i';
    buffer[0][9] = 'j';
    buffer[0][10] = 'k';
    buffer[0][11] = 'l';
    buffer[0][12] = 'm';
    buffer[0][13] = 'n';
    buffer[0][14] = 'o';
    buffer[0][15] = 'p';
    buffer[0][16] = 'q';
    buffer[0][17] = 'r';
    buffer[0][18] = 's';
    buffer[0][19] = 't';
    buffer[0][20] = 'u';
    buffer[0][21] = 'v';
    buffer[0][22] = 'w';
    buffer[0][23] = 'x';
    buffer[0][24] = 'y';
    buffer[0][25] = 'z';
    buffer[1][0] = 'A';
    buffer[1][1] = 'B';
    buffer[1][2] = 'C';
    buffer[1][3] = 'D';
    buffer[1][4] = 'E';
    buffer[1][5] = 'F';
    buffer[1][6] = 'G';
    buffer[1][7] = 'H';
    buffer[1][8] = 'I';
    buffer[1][9] = 'J';
    buffer[1][10] = 'K';
    buffer[1][11] = 'L';
    buffer[1][12] = 'M';
    buffer[1][13] = 'N';
    buffer[1][14] = 'O';
    buffer[1][15] = 'P';
    buffer[1][16] = 'Q';
    buffer[1][17] = 'R';
    buffer[1][18] = 'S';
    buffer[1][19] = 'T';
    buffer[1][20] = 'U';
    buffer[1][21] = 'V';
    buffer[1][22] = 'W';
    buffer[1][23] = 'X';
    buffer[1][24] = 'Y';
    buffer[1][25] = 'Z';
    buffer[2][0] = '0';
    buffer[2][1] = '1';
    buffer[2][2] = '2';
    buffer[2][3] = '3';
    buffer[2][4] = '4';
    buffer[2][5] = '5';
    buffer[2][6] = '6';
    buffer[2][7] = '7';
    buffer[2][8] = '8';
    buffer[2][9] = '9';
    cr_assert_str_eq(buffer[0], "abcdefghijklmnopqrstuvwxyz");
    cr_assert_str_eq(buffer[1], "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    cr_assert_str_eq(buffer[2], "0123456789");
    for (int i = 0; i < 3; i++) {
        free(buffer[i]);
    }
    free(buffer);
}
// My_str_to_word_array
Test(my_str_to_word_array, simple)
{
    char *str = "Hello World !";
    char **buffer = my_str_to_word_array(str);
    cr_assert_str_eq(buffer[0], "Hello");
    cr_assert_str_eq(buffer[1], "World");
    cr_assert_str_eq(buffer[2], "!");
    cr_assert_eq(buffer[3], NULL);
    for (int i = 0; i < 3; i++) {
        free(buffer[i]);
    }
    free(buffer);
}

Test(my_str_to_word_array, middle)
{
    char *str = "Hello World !\nHow are you ?";
    char **buffer = my_str_to_word_array(str);
    cr_assert_str_eq(buffer[0], "Hello");
    cr_assert_str_eq(buffer[1], "World");
    cr_assert_str_eq(buffer[2], "!");
    cr_assert_str_eq(buffer[3], "How");
    cr_assert_str_eq(buffer[4], "are");
    cr_assert_str_eq(buffer[5], "you");
    cr_assert_str_eq(buffer[6], "?");
    cr_assert_eq(buffer[7], NULL);
    for (int i = 0; i < 7; i++) {
        free(buffer[i]);
    }
    free(buffer);
}

Test(my_str_to_word_array, hard)
{
    char *str = "Hello World !\nHow are you ?\nI'm fine, and you ?";
    char **buffer = my_str_to_word_array(str);
    cr_assert_str_eq(buffer[0], "Hello");
    cr_assert_str_eq(buffer[1], "World");
    cr_assert_str_eq(buffer[2], "!");
    cr_assert_str_eq(buffer[3], "How");
    cr_assert_str_eq(buffer[4], "are");
    cr_assert_str_eq(buffer[5], "you");
    cr_assert_str_eq(buffer[6], "?");
    cr_assert_str_eq(buffer[7], "I'm");
    cr_assert_str_eq(buffer[8], "fine,");
    cr_assert_str_eq(buffer[9], "and");
    cr_assert_str_eq(buffer[10], "you");
    cr_assert_str_eq(buffer[11], "?");
    cr_assert_eq(buffer[12], NULL);
    for (int i = 0; i < 12; i++) {
        free(buffer[i]);
    }
    free(buffer);
}
// Testing My_show_word_array
Test(my_show_word_array, simple, .init=redirect_all_stdout)
{
    char *str = "Hello World !";
    char **buffer = my_str_to_word_array(str);
    my_show_array(buffer);
    cr_assert_stdout_eq_str("Hello\nWorld\n!\n");
    for (int i = 0; i < 3; i++) {
        free(buffer[i]);
    }
    free(buffer);
}

Test(my_show_word_array, middle, .init=redirect_all_stdout)
{
    char *str = "Hello World !\nHow are you ?";
    char **buffer = my_str_to_word_array(str);
    my_show_array(buffer);
    cr_assert_stdout_eq_str("Hello\nWorld\n!\nHow\nare\nyou\n?\n");
    for (int i = 0; i < 7; i++) {
        free(buffer[i]);
    }
    free(buffer);
}

Test(my_show_word_array, hard, .init=redirect_all_stdout)
{
    char *str = "Hello World !\nHow are you ?\nI'm fine, and you ?";
    char **buffer = my_str_to_word_array(str);
    my_show_array(buffer);
    cr_assert_stdout_eq_str("Hello\nWorld\n!\nHow\nare\nyou\n?\nI'm\nfine,\nand\nyou\n?\n");
    for (int i = 0; i < 12; i++) {
        free(buffer[i]);
    }
    free(buffer);
}

Test(my_show_word_array, extra1, .init=redirect_all_stdout)
{
    char *str = "+ - * / %";
    char **buffer = my_str_to_word_array(str);
    my_show_array(buffer);
    cr_assert_stdout_eq_str("+\n-\n*\n/\n%\n");
    for (int i = 0; i < 5; i++) {
        free(buffer[i]);
    }
    free(buffer);
}