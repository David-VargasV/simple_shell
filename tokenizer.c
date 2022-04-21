#include "main.h"

/**
* tokenizer - breaks the line in segments
* @line: line set by stdin
* @delim: chars to delim with
* Return: tokens
*/

char **tokenizer(char *line, char *delim)
{
	int len = 0, j = 0;
	char *ltok_1 = NULL;
	char **tokens = NULL;

	len = _strlen(line);
	ltok_1 = strtok(line, delim);

	tokens = malloc(sizeof(char *) * (len + 1));
	if (tokens == NULL)
	{
		free(tokens);
		return(NULL);
	}

	while (j < len)
	{
		tokens[j] = ltok_1;
		j++;
		ltok_1 = strtok(NULL, delim);
	}
	return (tokens);
}