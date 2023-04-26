#include "shell.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c = '$', **w, *r;

	while (1)
	{
		write(STDOUT_FILENO, &c, 1);
		r = _getline();
		if (r == NULL)
		{
			break;
		}
		w = malloc(sizeof(char *) * _strlen(r));
		if (w != NULL)
		{
			w = _split(r);
		}
		_execute_command(w, r);
		free(w);
		free(r);
	}
	return (0);
}
