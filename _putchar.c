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
	return (write(1, &c, 1));
}



int _puts(char *str)
{
	char *a = str;

	while(*str)
		_putchar(*str++);
	return(str - a);
}
