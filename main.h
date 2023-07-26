#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * struct holberton - connect conversion specifier w/ correct print function.
 * @f: a function pointer to the print functions.
 * @op: the conversion specifier.
 */

typedef struct pros 
{
    char *op;
    int (*f)(va_list);
}pros_f;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int (*get_func(const char *ch))(va_list args);


#endif
