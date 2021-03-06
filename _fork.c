#include "main.h"
/**
 * _forki - Function that forks the process
 * @l_token: line token
 * @path: command path
 * Return: 0 (Success)
 */
int _forki(char **l_token, char *path)
{
	int status = 0;
	pid_t pidC = 0;

	pidC = fork();
	if (pidC < 0)
		return (-1);

	if (pidC > 0)
	{
		wait(&status);
		free(path);
		free(l_token);
	}
	else if (pidC == 0)
	{
		if (execve(path, l_token, environ) == -1)
			return (-1);
	}
	return (0);
}
