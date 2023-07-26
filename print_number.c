#include "main.h"
/**
 * print_number - print number
 * @num: number to print
 * Return: nember lenth
 */
int print_number(int num)
{
	char buffer[20];
	int len = 0;

	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	do {
		buffer[len++] = '0' + (num % 10);
		num /= 10;
	} while (num > 0);

	for (int i = len - 1; i >= 0; i--)
		putchar(buffer[i]);
	return (len);
}
