#include "shell.h"

/**
 * _strtokk - Tokeninze inputs
 * @str: String from user
 * @del: The delimitor
 * Return: Always tokens
 */

char *_strtokk(char *str, const char *del)
{
	char *ts, *p;
	const char *d;
	static char *ss;

	ss = NULL;
	if (str != NULL)
	{
		ss = str;
	}
	else if (ss == NULL)
	{
		return (NULL);
	}
	ts = ss;
	p = ss;
	while (*p != '\0')
	{
		d = del;
		while (*d != '\0' && *p != *d)
		{
			d++;
		}
		if (*d != '\0')
		{
			*p = '\0';
			ss = p + 1;
			if (ts == ss)
			{
				ts = NULL;
			}
			return (ts);
		}
		p++;
	}
	ss = NULL;
	if (ts == ss)
	{
		return (NULL);
	}
	return (ts);
}
