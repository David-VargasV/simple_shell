#include "main.h"

int _forki(char *line, char **l_token, char *path)
{
    int status = 0;
	pid_t pidC = 0;

    pidC = fork();

	if(pidC > 0)
	{
		wait(&status);
	}
	else if(pidC == 0)
	{
		free(l_token);
        printf("%s\n", line);
		printf("%s\n", path);
        exit(EXIT_SUCCESS);
	}
	else
	{
		free(l_token);
		return(-1);
	}
    return(0);
}