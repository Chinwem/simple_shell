#include "shell.h"
/**
 * _prerror - Prints an error message indicating that a command is not found
 * @e: The name of the command that was not found
 *
 * Return: void
 */

Void _prerror(char *e)
{
	char *y;

	y = malloc(sizeof(char *) * _strlen(e) + _strlen(" :not found"));
	y = _strcat(e, ":not found");
	write(STDOUT_FILENO, y, _strlen(y));
	write(STDOUT_FILENO, "\n", 1);
}
