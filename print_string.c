#include "main.h"

/**
 * print_string - Prints a string.
 * @args: Va_list containing the string or char to print as the next element.
 *
 * Return: The number of bytes printed.
 */

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
