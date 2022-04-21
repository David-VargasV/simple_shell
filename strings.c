#include "main.h"

/**
 * _strcmp - function to compare strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] != '\0') && (s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])

			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _strlen - returns the length of the string
 * @s: pointer string
 * Return: Value
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s++)
		str++;

	return (str);
}

/**
 * _strcpy - copy string
 * @dest: var
 * @src: pointer
 * Return: Value
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - copy string string2 into string1
 * @dest: var
 * @src: var
 * Return: Value
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dlen;

	while (dest[i])
	{
		i++;
	}
	dlen = i;
	i = 0;
	while (src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dest);
}

/**
 * _strncmp - perform an ordinal comparison
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: Value or NULL
 */

char *_strncmp(char *s1, char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (s1);
	}
	else
	{
		return (NULL);
	}
}
