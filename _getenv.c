#include "main.h"
/**
* _getenv - finds the path of the command
* @token: command
* Return: path
*/
char *_getenv(char *token)
{
	int i = 0, p_len = 0, j = 1;
	char **t_path = NULL;
	char *path = NULL, *new_path = NULL, *delim = "=:";

	while (environ[i])
	{
		if (_strncmp(environ[i], "PATH", 4) == 0)
		{
			path = _strdup(environ[i]);
			break;
		}
		i++;
	}
	if (path == NULL)
		return (NULL);

	p_len = t_count(path, delim);
	t_path = malloc(sizeof(char *) * (p_len + 1));
	t_path = tokenizer(path, delim);
	while (t_path[j])
	{
		new_path = _strdup(t_path[j]);
		new_path = _strcat(new_path, "/");
		new_path = _strcat(new_path, token);
		if (access(new_path, F_OK) == 0)
		{
			free(path);
			free(t_path);
			return (new_path);
		}
		j++;
	}
	free(path);
	free(t_path);
	return (NULL);
}
