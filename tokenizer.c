#include "main.h"

/**
 * tokenizer - breaks the line in segments
 * @line: line set by stdin
 * @delim: chars to delim with
 * Return: tokens
 */

char **tokenizer(char *line, char *delim)
{
	int i = 1, len = 0;
	char **tokens = NULL;

	len = t_count(line, delim);
	tokens = malloc(sizeof(char *) * (len + 1));
	if (tokens == NULL)
		return (NULL);

	tokens[0] = strtok(line, delim);
	if (tokens[0] == NULL)
	{
		free_ptr(tokens);
		return (NULL);
	}

	while (i < len)
	{
		tokens[i] = strtok(NULL, delim);
		i++;
	}
	return (tokens);
}
