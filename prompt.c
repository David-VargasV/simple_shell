#include "main.h"
/**
 * sigintHandler - entry point
 *
 * Return: void (Success)
 */
void sigintHandler(int sig)
{
	UNUSED(sig);
	write(STDERR_FILENO, "\n$ ", 4);
}

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main()
{
	int n_char = 0;
	char *line = NULL, *d_line = NULL, *delim = " \n\t", *path = NULL;
	size_t size = 0;
	char **l_token = NULL;

	signal(SIGINT, sigintHandler);

	while (1)
	{
		printf("$ ");
		n_char = getline(&line, &size, stdin);

		if(n_char == EOF)
		{
			free(line);
			return(0);
		}

		d_line = _strdup(line);

		l_token = malloc(sizeof(char *) * (n_char + 1));
		l_token = tokenizer(d_line, delim);

		path = _getenv(l_token[0]);

		if(_forki(line, l_token, path) == -1)
		{
			free(l_token);
			printf("error");
		}
	}
	exit(EXIT_SUCCESS);
}
