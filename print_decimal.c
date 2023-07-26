#include "main.h"
/**
 * print_number - print number
 * @args: number to print
 * print_decimal - prints a decimal.
 * Return: nember 
 */
int print_decimal(va_list args)
{
	unsigned int name, dec, number = 1, account = 0;
	int d;

	d = va_arg(args, int);
	if (d < 0)
	{
		name = -d;
		account += _putchar('-');
	}
	else
		name = d;
	dec = name;
	while (dec > 9)
	{
		dec /= 10;
		number *= 10;
	}
	while (number >= 1)
	{
		account += _putchar(((name / number) % 10) + '0');
		number /= 10;
	}
	return (account);
}
