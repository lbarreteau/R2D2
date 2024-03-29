/*
** EPITECH PROJECT, 2021
** My_linked_list.h
** File description:
** libmylinkedlist.a in this file
*/

#pragma once

#include <stddef.h>
#include <sys/types.h>

struct s_node {
    void *item;
    struct s_node *next;
};

struct s_node *my_create_linked_list(void);
void my_delete_linked_list(struct s_node *list);
struct s_node *my_create_link(struct s_node *list, void *item);
void my_delete_link(struct s_node *list, size_t index);
ssize_t my_count_links(struct s_node *list);
struct s_node *my_go_to_end_link(struct s_node *list);
void my_delete_linked_list(struct s_node *list);
void my_print_linked_list(struct s_node *list);
