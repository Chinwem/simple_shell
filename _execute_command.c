#include "shell.h"
/**
 * _execute_command - Executes a command based on user input
 * @g: Array of strings containing command arguments
 * @d: string containing the command to be executed
 *
 * Return: Always returns 0
 */
int _execute_command(char **g, char *d)
{
	if (_strncmp(d, "exit", 4) == 0)
	{
		_exitt(d);
	}
	else if (_strcmp(d, "env") == 0)
	{
		-envp();
	}
	else
	{
		xte_external(g, d);
	}
	return (0);
}
