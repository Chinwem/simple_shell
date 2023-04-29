#include "shell.h"

/**
 * _strncmp - Compares to strings
 * @ss1: String to compare
 * @ss2: String to compare with
 * @pp: Number of arrays to compare
 * Return: Always 0
 */
int _strncmp(const char *ss1, const char *ss2, size_t pp)
{
	size_t i;

	for (i = 0; i < p; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == '\0')
		{
			break;
		}
	}
	return (0);
}
