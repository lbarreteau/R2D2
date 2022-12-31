/*
** EPITECH PROJECT, 2021
** My_delete_link
** File description:
** This function delete the link at the given index.
*/

#include <stdlib.h>
#include "my_linked_list.h"

void my_delete_link(struct s_node *list, size_t index)
{
    struct s_node *tmp = list;
    struct s_node *tmp2 = list;

    if (index == 0) {
        list = list->next;
        free(tmp);
        return;
    }
    for (size_t i = 0; i < index; i++) {
        tmp = tmp->next;
    }
    for (size_t i = 0; i < index - 1; i++) {
        tmp2 = tmp2->next;
    }
    tmp2->next = tmp->next;
    free(tmp);
}
