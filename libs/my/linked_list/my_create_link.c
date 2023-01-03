/*
** EPITECH PROJECT, 2021
** My_create_link
** File description:
** This function create a new link with the given linked list.
*/

#include <stddef.h>
#include <stdlib.h>
#include "my_linked_list.h"

struct s_node *my_create_link(struct s_node *list, void *item)
{
    struct s_node *new_link = malloc(sizeof(struct s_node));

    if (new_link == NULL) {
        return (NULL);
    }
    new_link->item = item;
    new_link->next = NULL;
    if (list == NULL) {
        return (new_link);
    }
    while (list->next != NULL) {
        list = list->next;
    }
    list->next = new_link;
    return (new_link);
}
