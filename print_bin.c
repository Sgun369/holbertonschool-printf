#include "main.h"

/**
 * print_bin - covert base 10 to base 2
 * @args: Va_list containing number in base 10
 * Return: number in base 2
 */

int print_bin(va_list args)
{
	unsigned int tmp, number = va_arg(args, int);
	int d = 1, len = 0;

	tmp = number;

	while (tmp / d > 1)
	{
		d *= 2;
	}
	while (d != 0)
	{
		_putchar(tmp / d + '0');
		tmp %= d;
		len++;
		d /= 2;
	}
	return (len);
}
