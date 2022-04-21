#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * _forki - Function that forks the process
 * @line: line set by stdin
 * @l_token: line token
 * @path: command path
 * Return: 0 (Success)
 */
int _forki(char *line, char **l_token, char *path)
{
	int status = 0;
	pid_t pidC = 0;

	UNUSED(line);

	pidC = fork();

	if (pidC > 0)
	{
		wait(&status);
	}
	else if (pidC == 0)
	{
		if(execve(path, l_token, environ) == -1)
		{
			perror("No path");
			exit(0);
		}
	}
	else
	{
		free(l_token);
		return (-1);
	}

	if(path)
	{
		free(path);
	}
	return (0);
}
