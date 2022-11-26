/*
** EPITECH PROJECT, 2021
** Printf.h
** File description:
** libmy.a in this file
*/

#pragma once

#include <stdarg.h>
#include <stdlib.h>

void percent_d(int nb);
void percent_long_d(long int nb);
void percent_o(int nb);
void percent_u(int nb);
void percent_x(int nb);
void percent_maj_x(int nb);
void percent_c(char c);
void percent_s(char *str);
void percent_percent(void);
void percent_p(int nb);
void percent_b(int nb);
void print_if_percent(char *str, va_list ap);
int redirect_first(char parameter, va_list ap, char *str, int z);
int redirect_second(char parameter, va_list ap, int z);
int redirect_third(char parameter, va_list ap, int z);
void redirect_other(char parameter, va_list ap);
char search_parameter(char *str, int z);
int search_percentage_number(char *str);
void my_printf(char *str, ...);
