#include "shell.h"
/**
 * _envp - prints the current environment
 *
 * Return: 0 on success
 */
int _envp(void)
{
	char **env = environ;

	while (*env)
	{
		write(STDOUT_FILENO, *env, _strlen(*env));
		env++;
	}
	return (0);
}
