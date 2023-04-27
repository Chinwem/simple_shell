#include "shell.h"
/**
 * _fork - creates a new process by duplicating the calling process
 * @z: arry of strings containing the command and its arguments
 *
 * Return: 0 on success, 1 on failure
 */


int _fork(char **z)
{
	char **envp = environ;
	int status;

	pid_t pid = fork();

	if (pid == -1)
	{
		_prerror(z[0]);
		return (1);
	}
	else if (pid == 0)
	{
		if (execve(z[0], z, envp) == -1)
		{
			_prerror(z[0]);
			return (1);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}
