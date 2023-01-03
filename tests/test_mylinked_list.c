/*
** EPITECH PROJECT, 2021
** Unit-test Lib My
** File description:
** This script test the libmy library
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_linked_list.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
// Testing My_create_linked_list
Test(my_create_linked_list, simple, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    cr_assert_eq(list->item, NULL);
    cr_assert_eq(list->next, NULL);
    free(list);
}

Test(my_create_linked_list, simple2, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    cr_assert_eq(list->item, NULL);
    cr_assert_eq(list->next, NULL);
    cr_assert_eq(list->item, NULL);
    cr_assert_eq(list->next, NULL);
    free(list);
}

Test(my_create_linked_list, simple3, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    cr_assert_eq(list->item, NULL);
    cr_assert_eq(list->next, NULL);
    cr_assert_eq(list->item, NULL);
    cr_assert_eq(list->next, NULL);
    free(list);
}
// Testing My_add_link
Test(my_create_link, simple, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    struct s_node *new_link = my_create_link(list, "Hello World !\n");
    cr_assert_eq(new_link->item, "Hello World !\n");
    cr_assert_eq(new_link->next, NULL);
    free(list);
    free(new_link);
}

Test(my_create_link, simple2, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    struct s_node *new_link = my_create_link(list, "42 is the answer of all of the questions in the universe");
    cr_assert_eq(new_link->item, "42 is the answer of all of the questions in the universe");
    cr_assert_eq(new_link->next, NULL);
    free(list);
    free(new_link);
}

Test(my_create_link, simple3, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    struct s_node *new_link = my_create_link(list, "Hello World !\n");
    struct s_node *new_link2 = my_create_link(list, "42 is the answer of all of the questions in the universe");
    cr_assert_eq(new_link->item, "Hello World !\n");
    cr_assert_eq(new_link->next, new_link2);
    cr_assert_eq(new_link2->item, "42 is the answer of all of the questions in the universe");
    cr_assert_eq(new_link2->next, NULL);
    free(list);
    free(new_link);
}
// Testing My_count_link
Test(my_count_links, simple, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    struct s_node *new_link = my_create_link(list, "Hello World !\n");
    cr_assert_eq(my_count_links(list), 2);
    free(list);
    free(new_link);
}

Test(my_count_links, simple2, .init=redirect_all_stdout)
{
    struct s_node *list = my_create_linked_list();
    struct s_node *new_link = my_create_link(list, "42 is the answer of all of the questions in the universe");
    struct s_node *new_link2 = my_create_link(list, "Hello World !\n");
    cr_assert_eq(my_count_links(list), 3);
    free(list);
    free(new_link);
    free(new_link2);
}
