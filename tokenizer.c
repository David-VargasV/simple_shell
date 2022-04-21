#include "main.h"

/**
 * tokenizer - breaks the line in segments
 * @line: line set by stdin
 * @delim: chars to delim with
 * Return: tokens
 */

char **tokenizer(char *line, char *delim, int len)
{
	int j = 0;
	char *ltok_1 = NULL;
	char **tokens = NULL;

	len = _strlen(line);
	ltok_1 = strtok(line, delim);
	if(ltok_1 == NULL)
	{
		return (NULL);
	}

	tokens = malloc(sizeof(char *) * (len + 1));
	if (tokens == NULL)
	{
		free(ltok_1);
		return (NULL);
	}

	while (j < len)
	{
		tokens[j] = ltok_1;
		j++;
		ltok_1 = strtok(NULL, delim);
	}
	free(ltok_1);
	return (tokens);
}
