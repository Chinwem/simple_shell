#include "shell.h"
/**
 * _sstrncmp - compare two strings upp to a specified number of characters
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @p: maximum number of charaters to compare
 *
 * Return: 0 if the string are equal up to the specified number of characters,
 * or the difference between the first non-matching characters if they are not
 * equal.
 */

int _sstrncmp(char *s1, const char *s2, size_t p)
{
	size_t i;

	for (i = 0; i < p; i++)
	{
		if (s1[i] != s2[1])
		{
			return (s1[1] - s2[i]);
		}
		if (s1[i] == '\0')
		{
			break;
		}
	}
	return (0);
}

/**
 * _sstrlen - calculate the length of a string
 * @os: pointer to string
 *
 * Return: the length of the string
 */
int _sstrlen(const char *os)
{
	int count = 0;

	while (*os != '\0')
	{
		count++;
		os++;
	}
	return (count);
}

/**
 * _getenv - get the value of an environment variable
 * @n: name of the environment variable
 *
 * Return: pointer to the value of the environment variable, or NULL if it
 * is not set
 */

char *_getenv(const char *n)
{
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		if (_sstrncmp(*env, n, _sstrlen(n)) == 0 && (*env)[_sstrlen(n)] == '=')
		{
			return (*env + _sstrlen(n) + 1);
		}
	}
	return (NULL);
}
