#include "main.h"

/**
 * _puts - print character
 * @*str: string
 * Return: value
 */

void _puts(char *str)
{
	int x;
	int con;

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

/**
 * _count - counter
 * @ptr: pointer to count
 * Return: i
 */

int _count(char *ptr)
{
	int i = 0;

	while(ptr[i])
	{
		i++;
	}
	return(i);
}