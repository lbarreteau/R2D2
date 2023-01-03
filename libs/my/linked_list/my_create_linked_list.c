/*
** EPITECH PROJECT, 2021
** My_create_link
** File description:
** This function create a new empty linked list.
*/

#include <stdlib.h>
#include "my_linked_list.h"

struct s_node *my_create_linked_list(void)
{
    struct s_node *new_link = malloc(sizeof(struct s_node));

    if (new_link == NULL) {
        return (NULL);
    }
    new_link->item = NULL;
    new_link->next = NULL;
    return (new_link);
}
