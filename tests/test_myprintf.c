/*
** EPITECH PROJECT, 2021
** Unit-test Lib My
** File description:
** This script test the libmy library
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_printf.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
// Testing My_printf
Test(my_printf, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n");
    cr_assert_stdout_eq_str("Hello World !\n");
}

Test(my_printf, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n I'm a student at Epitech\n");
    cr_assert_stdout_eq_str("Hello World !\n I'm a student at Epitech\n");
}
// Testing %d
Test(percent_d, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%d is the answer of all\n", 42);
    cr_assert_stdout_eq_str("Hello World !\n42 is the answer of all\n");
}

Test(percent_d, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%d is the answer of all\n", -42);
    cr_assert_stdout_eq_str("Hello World !\n-42 is the answer of all\n");
}

Test(percent_d, simple3, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%d is the answer of all\n", 0);
    cr_assert_stdout_eq_str("Hello World !\n0 is the answer of all\n");
}

Test(percent_d, simple4, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%d is the answer of all\n", 2147483647);
    cr_assert_stdout_eq_str("Hello World !\n2147483647 is the answer of all\n");
}

Test(percent_d, simple5, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%d is the answer of all\n", -2147483648);
    cr_assert_stdout_eq_str("Hello World !\n-2147483648 is the answer of all\n");
}

Test(percent_long_d, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%ld is the answer of all\n", 42);
    cr_assert_stdout_eq_str("Hello World !\n42 is the answer of all\n");
}

Test(percent_long_d, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%ld is the answer of all\n", -42);
    cr_assert_stdout_eq_str("Hello World !\n-42 is the answer of all\n");
}

Test(percent_long_d, simple3, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%ld is the answer of all and %ld is the answer of all\n", 0, 42);
    cr_assert_stdout_eq_str("Hello World !\n0 is the answer of all and 42 is the answer of all\n");
}

Test(percent_long_d, simple4, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%ld is the answer of all\n", 2147483647);
    cr_assert_stdout_eq_str("Hello World !\n2147483647 is the answer of all\n");
}

Test(percent_long_d, simple5, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%ld is the answer of all\n", -2147483648);
    cr_assert_stdout_eq_str("Hello World !\n-2147483648 is the answer of all\n");
}
// Testing %o
Test(percent_o, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%o is the answer of all\n", 42);
    cr_assert_stdout_eq_str("Hello World !\n52 is the answer of all\n");
}

Test(percent_o, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%o is the answer of all\n", 84);
    cr_assert_stdout_eq_str("Hello World !\n124 is the answer of all\n");
}
// Testing %u
Test(percent_u, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%u is the answer of all\n", 42);
    cr_assert_stdout_eq_str("Hello World !\n42 is the answer of all\n");
}

Test(percent_u, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%u is the answer of all\n", 84);
    cr_assert_stdout_eq_str("Hello World !\n84 is the answer of all\n");
}

Test(percent_u, simple3, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%u is the answer of all\n", 0);
    cr_assert_stdout_eq_str("Hello World !\n0 is the answer of all\n");
}

Test(percent_u, simple4, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%u is the answer of all\n", 2147483647);
    cr_assert_stdout_eq_str("Hello World !\n2147483647 is the answer of all\n");
}

Test(percent_u, simple5, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%u is the answer of all\n", -214);
    cr_assert_stdout_eq_str("Hello World !\n214 is the answer of all\n");
}
// Testing %x
Test(percent_x, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%x is the answer of all\n", 84);
    cr_assert_stdout_eq_str("Hello World !\n54 is the answer of all\n");
}
// Testing %s
Test(percent_s, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%s is the answer of all\n", "Hello");
    cr_assert_stdout_eq_str("Hello World !\nHello is the answer of all\n");
}

Test(percent_s, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%s is the answer of all\n", "Hello World !");
    cr_assert_stdout_eq_str("Hello World !\nHello World ! is the answer of all\n");
}

Test(percent_s, simple3, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%s is the answer of all\n", "Hello World !\n");
    cr_assert_stdout_eq_str("Hello World !\nHello World !\n is the answer of all\n");
}

Test(percent_s, simple4, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%s is the answer of all\n", "Hello World !\nHello World !\n");
    cr_assert_stdout_eq_str("Hello World !\nHello World !\nHello World !\n is the answer of all\n");
}
// Testing %c
Test(percent_c, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%c is the answer of all\n", 'H');
    cr_assert_stdout_eq_str("Hello World !\nH is the answer of all\n");
}

Test(percent_c, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%c is the answer of all\n", 'e');
    cr_assert_stdout_eq_str("Hello World !\ne is the answer of all\n");
}

Test(percent_c, simple3, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%c is the answer of all\n", 'l');
    cr_assert_stdout_eq_str("Hello World !\nl is the answer of all\n");
}
// Testing %%
Test(percent_percent, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%% is the answer of all\n");
    cr_assert_stdout_eq_str("Hello World !\n% is the answer of all\n");
}

Test(percent_percent, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\nZoulou%% GANGG\n");
    cr_assert_stdout_eq_str("Hello World !\nZoulou% GANGG\n");
}
// Testing %X
Test(percent_X, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%X is the answer of all\n", 84);
    cr_assert_stdout_eq_str("Hello World !\n54 is the answer of all\n");
}
// Testing %b
Test(percent_b, simple, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%b is the answer of all\n", 1);
    cr_assert_stdout_eq_str("Hello World !\n1 is the answer of all\n");
}

Test(percent_b, simple2, .init=redirect_all_stdout)
{
    my_printf("Hello World !\n%b is the answer of all\n", 0);
    cr_assert_stdout_eq_str("Hello World !\n0 is the answer of all\n");
}
