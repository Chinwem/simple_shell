#include "shell.h"
/**
 * _exitt - Exit the shell
 * @ag: A string containing the arguments passed to the command
 *
 * Description: This function parses the input string @ag to extract the exit
 * status that the shell should return. If a valid integer is found, the shell
 * exits with that status code. Otherwise, the shell exits with status code 0
 */

void _exitt(char *ag)
{
	char *u;
	int status;

	u = _strtokk(ag + 4, " ");
	if (u != NULL)
	{
		status = _atoi(u);
		exit(status);
	}
	else
	{
		exit(0);
	}
}
