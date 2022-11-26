/*
** EPITECH PROJECT, 2021
** Printf.h
** File description:
** libmy.a in this file
*/

#pragma once

#include <stdbool.h>

#define EMPTY_CHAR '.'
#define CELL_CHAR 'X'

typedef struct game_data_s {
    char **map;
    unsigned int n_iteration;
} game_data_t;

bool check_error(int ac, char **av, game_data_t *game_data);
void init_struct(game_data_t *game_data, unsigned int n_iteration, char *buffer);
void free_map(char **map);
void print_map(char **map);
char *open_and_read_file(char *filepath);
void game_loop(game_data_t *game_data);
char fill_tile(unsigned int neighbor_nb, char map_tile);
unsigned int get_neighbors_nb(char **map, unsigned int j, unsigned int i);
