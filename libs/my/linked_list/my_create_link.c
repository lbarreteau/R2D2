/*
** EPITECH PROJECT, 2021
** My_create_link
** File description:
** This function create a new link with the given linked list.
*/

#include <stddef.h>
#include <stdlib.h>
#include "my_linked_list.h"

struct s_node *my_create_link(void *item)
{
    struct s_node *node = malloc(sizeof(struct s_node));
    node->item = item;
    node->next = NULL;
    return node;
}
