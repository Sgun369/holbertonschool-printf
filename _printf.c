#include "main.h"
/**
 * _printf - printf
 * @format: input
 * Return: lenth of output
 */
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
