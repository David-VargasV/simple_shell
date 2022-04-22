#include "main.h"
/**
 * sigintHandler - entry point
 * @sig: Variable
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

int main(void)
{
	int n_char = 0;
	char *line = NULL, *delim = " \n\t", *path = NULL;
	size_t size = 0;
	char **l_token = NULL;

	signal(SIGINT, sigintHandler);
	while (1)
	{
		printf("$ ");
		n_char = getline(&line, &size, stdin);
		if (n_char == EOF)
		{
			free(line);
			return (0);
		}

		l_token = malloc(sizeof(char *) * (n_char + 1));
		l_token = tokenizer(line, delim, n_char);
		if (!l_token)
		{
			free(line);
		}

		path = _getenv(l_token[0]);
		if (!path)
		{
			free(path);
			free_ptr(l_token);
		}
		else if (_forki(l_token, path) == -1)
		{
			free(l_token);
			free(path);
			free(line);
			printf("error");
		}
		free(l_token);
	}
	return (0);
}
