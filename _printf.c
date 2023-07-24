#include "main.h"




int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

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
					char x = va_arg(args, char);
					_putchar(x);
					break;
				}
				case 's':
				{
					char *x = va_arg(args, char*);
					_puts(x);
					break;
				}
			}
		}
		else
		{
			putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return 0;
}


