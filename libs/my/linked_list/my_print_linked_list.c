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
        my_putstr("The linked list is empty.\n");
        return;
    }
    while (list->next != NULL) {
        my_putstr(list->item);
        my_putstr(" -> ");
        list = list->next;
    }
    my_putstr(list->item);
    my_putstr(" -> NULL\n");
}
