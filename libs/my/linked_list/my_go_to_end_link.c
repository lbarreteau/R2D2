/*
** EPITECH PROJECT, 2021
** My_go_to_end
** File description:
** This function go to the end of the linked list.
*/

#include <stddef.h>
#include "my_linked_list.h"

struct s_node *my_go_to_end_link(struct s_node *list) {
    if (list == NULL) {
        return NULL;
    }
    if (list->next == NULL) {
        return list;
    }
    return my_go_to_end_link(list->next);
}