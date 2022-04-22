#include "main.h"

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

int t_count(char *ptr, char *delim)
{
	int i = 0, j = 0, len = 0;

	while (ptr[i])
	{
		j = 0;
		while(ptr[j])
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