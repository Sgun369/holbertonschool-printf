#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
typedef struct pros
{
    char *op;
    int (*f)(va_list);
} pros_f;

int _putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int print_char(va_list args)
{
    char c = va_arg(args, int);
    int ret;

    ret = _putchar(c);
    if (ret == -1)
        return (-1);

    return (1);
}
int print_percent(va_list args)
{
    (void)args;
    _putchar('%');
    return (1);
}
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int count = 0;
    int ret;

    if (!str)
        str = "(null)";
    while (*str)
    {
        ret = _putchar(*str);
        if (ret == -1)
            return (-1);
        count++;
        str++;
    }
    return (count);
}
int (*get_func(const char *ch))(va_list args)
{
    int index;

    pros_f print_op[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
        {NULL, NULL}
    };

    for (index = 0; print_op[index].op; index++)
    {
        if (*print_op[index].op == *ch)
            return (print_op[index].f);
    }
    return (NULL);
}

int _printf(const char *format, ...)
{
    int i = 0;
    va_list args;
    int (*function)(va_list) = NULL;

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            function = get_func(format);
            if (*(format) == '\0')
                return (-1);
            else if (function == NULL)
            {
                _putchar(*(format - 1));
                _putchar(*format);
                i += 2;
            }
            else
            {
                i += function(args);
            }
        }
        else
            i += _putchar(*format);
        format++;
    }
    va_end(args);
    return (i);
}


int main(void)
{
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    return (0);
}