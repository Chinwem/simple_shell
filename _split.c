#include "shell.h"

/**
 * _split - Parse user's input
 * @r: User's input
 * Return: The parsed string
 */
char **_split(char *r)
{
	int f = bf, pos = 0;
	char **token, *t;

	token = malloc(f  * sizeof(char *));
	if (!token)
	{
		_prerror(r);
	}
	t = _strtokk(r, " ");
	while (t != NULL)
	{
		token[pos] = t;
		pos++;
		if (pos >= f)
		{
			f += bf;
			token = _realloc(token, f * sizeof(char *), f  * sizeof(char *));
			if (!token)
			{
				_prerror(r);
			}
		}
		t = _strtokk(NULL, " ");
	}
	token[pos] = NULL;
	return (token);
}
