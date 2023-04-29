#include "shell.h"

/**
 * _strncmp - Compares to strings
 * @s1: String to compare
 * @s2: String to compare with
 * @p: Number of arrays to compare
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
