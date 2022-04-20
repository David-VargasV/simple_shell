#include "main.h"

/**
 *
 * 
 *
 */

int main()
{
	int len_token = 0;
    char *line = NULL, *d_line = NULL, *delim = " \n\t", *path = NULL;
    size_t size = 0;
    char **l_token = NULL;

	while (1)
    {
		printf("$ ");
		getline(&line, &size, stdin);
		d_line = _strdup(line);

		len_token = _strlen(d_line);
		l_token = malloc(sizeof(char *) * (len_token + 1));
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