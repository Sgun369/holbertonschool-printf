#include "main.h"

/**
 * get_function - determine which print function to use.
 *
 * @ch: The character that identifies the type of the variable to print.
 *
 * Return: pointer to the matching print function.
 */


int (*get_func(char *ch)(va_list))
{
	int index;

	pros_f print_op[] = {
	{'c', print_char},
 	{'s', print_string},
	{'%', print_percent},
	{NULL, NULL},
    };
    for (index = 0; print_op[index].op; index++)
    {
        if (*ch == print_op[index].op)
            return (print_op[index].f);
    }
    return (NULL);

	pros_f print_op[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{NULL, NULL}
	};

	for (index = 0; print_op[index].op; index++)
	{
		if (*ch == print_op[index].op)
			return (print_op[index].f);
	}
	return (NULL);

}
