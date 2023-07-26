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
	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			int (*function)(va_list) = NULL;

			format++;
			function = get_func(*format);
			if (*format == '\0') return (-1);
			else if (function == NULL)
			{
				i += _putchar(*(format - 1));
				i += _putchar(*format);
			}
			else i += function(args);
		}
		else
			i += _putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
