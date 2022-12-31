/*
** EPITECH PROJECT, 2021
** my_basics.h
** File description:
** libmy.a in this file
*/

#pragma once

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SUCCESS 0
#define ERROR 84

ssize_t my_putchar(char const c);
ssize_t my_print_alpha(void);
ssize_t my_print_revalpha(void);
ssize_t my_print_digits(void);
bool my_isneg(int n);
ssize_t my_print_comb(void);
ssize_t my_print_comb2(void);
ssize_t my_put_nbr(int nb);
void my_swap(int *a, int *b);
ssize_t my_putstr(char const *str);
ssize_t my_strlen(char const *str);
char *my_evil_str(char *str);
ssize_t my_getnbr(char const *str);
ssize_t my_compute_factorial_it(int nb);
ssize_t my_compute_factorial_rec(int nb);
ssize_t my_compute_power_it(int nb, int p);
ssize_t my_compute_power_rec(int nb, int p);
ssize_t my_compute_square_root(int nb);
bool my_is_prime(int nb);
ssize_t my_find_prime_sup(int nb);
char *my_strcpy(char *dest , char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
ssize_t my_strcmp(char *s1, char *s2);
ssize_t my_strncmp(char const *s1, char const *s2, int n);
ssize_t my_strstr(char *str, char const *to_find);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char **mem_alloc_2d_array(int nb_rows , int nb_cols);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
void my_show_array(char **array);