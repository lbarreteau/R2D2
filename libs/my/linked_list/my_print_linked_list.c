/*
** EPITECH PROJECT, 2021
** My_print_linked_list
** File description:
** This function print the linked list passed in parameter.
*/

#include "my_basics.h"
#include "my_linked_list.h"

void my_print_linked_list(struct s_node *list)
{
    if (list == NULL) {
        return;
    }
    my_putstr(list->item);
    my_putchar(' ');
    my_print_linked_list(list->next);
}
