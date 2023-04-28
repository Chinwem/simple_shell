#include "shell.h"

/**
 * _strcpy - Copies strings
 * @dest: Variable to copy to
 * @src: Variable to copy from
 * Return: Always copied string
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
