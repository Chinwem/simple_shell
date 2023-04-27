#include "shell.h"
/**
 * _strcat - Concanate strings
 * @dest: Destination variable
 * @src: Source variable
 * Return: Always concanated string
 */

char *_strcat(char *dest, const char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';
	return (dest);
}
