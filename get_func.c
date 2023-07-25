#include "main.h"

/**
 * get_function - determine which print function to use.
 *
 * @ch: The character that identifies the type of the variable to print.
 *
 * Return: pointer to the matching print function.
 */


int (*get_func(char ch)(va_list))
{
    int index = 0;
    pros_f print_op[] = {
        {'c', print_char},
        {'s', prisnt_string},
        {NULL, NULL}
    };
    while (print_op[index].op)
    {
        if (ch == print_op[index].op)
        {
            return(print_op[index].f);
        }
        index++;
    }
    return (NULL);
}