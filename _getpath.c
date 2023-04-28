#include "shell.h"
/**
 * _getpath - searches for a given executable file in the directories
 * listed in the PATH environment variable
 * @a: name of the executable file
 *
 * Return: pointer to the full path of the executable file if found, or NULL
 * if not found or an error occurred
 */
char *_getpath(char *a)
{
	char *fp, *token, *th, *ir;

	th = _getenv("PATH");
	if (th == NULL)
	{
		return (NULL);
	}
	ir = _strtokk(th, ":");
	while (ir != NULL)
	{
		fp = malloc(_strlen(ir) + _strlen(a) + 2);
		if (fp == NULL)
		{
			return (NULL);
		}
		_strcpy(fp, ir);
		_strcat(fp, "/");
		_strcat(fp, a);
		if (access(fp, X_OK) == 0)
		{
			token = fp;
			return (token);
		}
		free(fp);
		ir = _strtokk(NULL, ":");
	}
	return (NULL);
}
