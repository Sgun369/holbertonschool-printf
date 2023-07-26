#include "main.h"




int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	va_start(args, format);



	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			int (*function)(va_list) = NULL;

			format++;
			function = get_func(*format);

			if (*format == '\0')
				return (-1);
			
			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				i += 2;
			}
			else
				i += function(args);

		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			i++;
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}

	va_end(args);
	return (i);
}


