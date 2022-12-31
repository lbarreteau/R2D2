/*
** EPITECH PROJECT, 2021
** My_count_links
** File description:
** This function count the number of link in the linked list.
*/

#include <stddef.h>
#include "my_linked_list.h"

ssize_t my_count_links(struct s_node *list)
{
    if (list == NULL) {
        return 0;
    }
    return (1 + my_count_links(list->next));
}
