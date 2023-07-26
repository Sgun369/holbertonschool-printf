#include "main.h"
/**
 * print_decimal - prints a decimal.
 * @args: number to print
 * Return: length of number.
 */
int print_decimal(va_list args)
{
	unsigned int tmp;
	int number = va_arg(args, int);
	int d = 1, len = 0;

	tmp = number;
	if (number < 0)
	{
		_putchar('-');
		tmp = -number;
		len++;
	}
	while (tmp / d > 9)
	{
		d *= 10;
	} 
	while (d != 0)
	{
		_putchar(tmp / d + '0');
		tmp %= d;
		len++;
		d /= 10;
	}
	return (len);
}
