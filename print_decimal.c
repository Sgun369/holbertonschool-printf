#include "main.h"
/**
 * print_decimal - prints a decimal.
 * @args: number to print
 * Return: length of number.
 */
int print_decimal(va_list args)
{
	int reverse = 0;
	long int number = va_arg(args, int);
	int length = 0;

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	if (number < 0)
	{
		_putchar('-');
		number = -number;
		length++;
	}
	while (number > 0)
	{
		reverse = reverse * 10 + number % 10;
		number /= 10;
		length++;
	}
	while (reverse > 0)
	{
		_putchar(reverse % 10 + '0');
		reverse /= 10;
	}
	return (length);
}
