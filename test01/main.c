#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1;
	int len2;
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len1 = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("%d  %d\n", len1, len2);
	_printf("%%\n");
	return (0);
}
