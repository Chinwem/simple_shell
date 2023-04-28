#include "shell.h"

/**
 * _strcmp - Compares two strings
 * @s: Avariable
 * @t: Variable to compare from
 * Return: Always 0
 */
int _strcmp(const char *s, const char *t)
{
	while (*s && (*s == *t))
	{
		++s;
		++t;
	}
	return (*(const unsigned char *)s - *(const unsigned char *)t);
}
