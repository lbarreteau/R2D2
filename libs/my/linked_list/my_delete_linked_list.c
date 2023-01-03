/*
** EPITECH PROJECT, 2021
** My_delete_link
** File description:
** This function delete linked list passed in parameter.
*/

#include <stdlib.h>
#include "my_linked_list.h"

void my_delete_linked_list(struct s_node *list)
{
    if (list == NULL) {
        return;
    }
    struct s_node *temp = list->next;
    free(list);
    my_delete_linked_list(temp);
}
