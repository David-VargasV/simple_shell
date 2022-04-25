#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: pointer string
 * Return: Value
 */

int _strlen(char *s)
{
	int str = 0;

	while (s[str])
		str++;

	return (str);
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

int _strncmp(char *s1, char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
/**
 * _strdup - dup a string
 * @str: string copied.
 * Return: dup str
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *new_s = NULL;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	new_s = malloc(sizeof(char) * (i + 1));

	if (new_s == NULL)
	{
		perror("./hsh");
		return (NULL);
	}

	if (i == 0 || new_s == 0)
		return (NULL);

	while (j < (i + 1))
	{
		new_s[j] = str[j];
		j++;
	}
	return (new_s);
}
/**
 * t_count - token counter
 * @ptr: ptr to check
 * @delim: delimiter
 * Return: lenght
 */
int t_count(char *ptr, char *delim)
{
	int i = 0, j = 0, len = 0;

	while (ptr[i])
	{
		j = 0;
		while (ptr[j])
		{
			if (ptr[i] == delim[j])
			{
				len++;
				break;
			}
			j++;
		}
		i++;
	}
	return (len);
}
