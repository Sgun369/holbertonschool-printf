#include "main.h"

/**
 * print_bin - covert base 10 to base 2
 * @args: Va_list containing number in base 10
 * Return: number in base 2
 */

int print_bin(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int j, index = 0;
	char buffer[1024] = {'\0'};

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

    while (number > 0)
	{
		buffer[index] = number % 2;
		number /= 2;
		index++;
	}
	j = index - 1;
	while (j >= 0)
	{
		_putchar(buffer[j] + '0');
		j--;

	}
	return (index);
}
