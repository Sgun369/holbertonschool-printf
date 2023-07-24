#include "main.h"




int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int len;
	int i;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	

	while (format[i])
	{
		if (format[i] == '%')
		{
			
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}

	va_end(args);
	return (len);
}


