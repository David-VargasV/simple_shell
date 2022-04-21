#include "main.h"

/**
 * _puts - print character
 * @*str: string
 * Return: value
 */

void _puts(char *str)
{
	int x = 0;
	int con = 0;

	con = _strlen(str);
	for (x = 0; x < con; x++)
		_putchar(str[x]);
}


/**
 * _putchar - putchar
 * @c: character
 * Return: value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
