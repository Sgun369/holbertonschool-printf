#include "main.h"




int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int len = 0;
	int i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					char x = va_arg(args, int);
					_putchar(x);
					len++;	
					break;
				}
				case 's':
				{
					char *x = va_arg(args, char *);
					len += _puts(x);
					break;
				}
			}
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


