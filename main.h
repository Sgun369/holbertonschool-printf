#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>


typedef struct pros 
{
    char *op;
    int (*f)(va_list);
}pros_f;

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);

#endif
