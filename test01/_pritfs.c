#include "main.h"
#include <stdarg.h>
 int _printf(const char *format, ...)
{
	int i;
	int count = 0;

	va_list args;
	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			int (*function)(va_list) = NULL;
			i++;
			if (format[i] == '\0')
				return (-1);
			function = get_func(format[i]);
			if (function == NULL)
			{
				_putchar('%');
				count++;

			if (format[i] != '%')
			{
				_putchar(format[i]);
				count++;
			}
			}
			else
			{
				count += function(args);
			}
		}
	}
	va_end(args);
	return (count);
}
