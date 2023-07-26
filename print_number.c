#include "main.h"
/**
 * print_number - print number
 * @num: number to print
 * Return: nember lenth
 */
int print_number(va_list arg)
{
	char buffer[20];
	int len = 0, num, i;

	num = va_arg(arg, int);
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	do {
		buffer[len++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);

	for (i = len - 1; i >= 0; i--)
		_putchar(buffer[i]);
	return (len);
}
