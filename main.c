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
	int n_char = 0, len_tok = 0;
	char *line = NULL, *delim = " \n\t", *path = NULL;
	size_t size = 0;
	char **l_token = NULL;

	signal(SIGINT, sigintHandler);
	while (1)
	{
		printf("$ ");
		n_char = getline(&line, &size, stdin);
		if (n_char == EOF)
			return (0);
		
		len_tok = t_count(line, delim);
		l_token = malloc(sizeof(char *) * (len_tok + 1));
		l_token = tokenizer(line, delim);
		if (l_token == NULL)
		{	free(line);
			perror("./hsh");
		}
		if (access(l_token[0], F_OK) == -1)
		{	path = _getenv(l_token[0]);
			if (path == NULL)
			{
				perror("./hsh");
				free(path);
				free_ptr(l_token);
			}
		}
		else
			path = _strdup(l_token[0]);

		if (_forki(l_token, path) == -1)
		{	free(l_token);
			free(path);
			free(line);
			perror("./hsh");
		}
	}
	return (0);
}
