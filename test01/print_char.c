#include "main.h"
/**
 * _putchar - writes the character c to stdoout
 * @c:The character to print.
 * 
 * Return: on success 1
 * on error , -1 is eturned, abdd errno is set appropriately.
*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}



/**
 * print_char - print character
 * @args: Va_list containing the string or char to print as the next element.
 * Return: success 1
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	int ret;
	
	ret = _putchar(c);
	if (ret == -1)
		return (-1);

	return (1);
}
