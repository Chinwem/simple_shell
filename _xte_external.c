#include "shell.h"

/**
 * xte_external - chechks if command is available
 * @x: The parsed input
 * @h: The inputs from user
 * Return: Always 0
 */
int xte_external(char **x, char *h)
{
	if (access(h, X_OK) == -1)
	{
		_prerror(h);
		return (0);
	}
	else if (_getpath(h) == NULL)
	{
		_prerror(h);
		return (0);
	}
	else
	{
		_fork(x);
	}
	return (0);
}
