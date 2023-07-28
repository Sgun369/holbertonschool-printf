#include "main.h"

/**
 * print_bin - covert base 10 to base 2
 * @args: Va_list containing number in base 10
 * Return: number in base 2
 */

int print_bin(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int d = 1, len = 0;

    while (number / d > 1)
	{
		d *= 2;
	}
	while (d != 0)
	{
		_putchar(number / d + '0');
		number %= d;
		len++;
		d /= 2;
	}
	return (len);
}
