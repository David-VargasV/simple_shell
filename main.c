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
	char *line = NULL;

	signal(SIGINT, sigintHandler);
	while (1)
	{
		char *path = NULL;
		char **l_token = NULL;
		ssize_t n_char = 0;
		size_t size = 0;

		printf("$ ");
		n_char = getline(&line, &size, stdin);
		if (n_char == EOF)
			return (0);

		l_token = malloc(sizeof(char *) * (t_count(line, " \n\t") + 1));
		l_token = tokenizer(line, " \n\t");
		if (l_token == NULL)
		{	perror("./hsh");
			free(line);
			continue; }
		if (access(l_token[0], F_OK) == -1)
		{	path = _getenv(l_token[0]);
			if (path == NULL)
			{	perror("./hsh");
				free(path);
				free_ptr(l_token);
				continue; }
		}
		else
			path = _strdup(l_token[0]);

		if (_forki(l_token, path) == -1)
		{	perror("./hsh");
			free(l_token);
			free(path);
			free(line);
			continue; }
		free(line); }
	return (0);
}
