#include "shell.h"

/**
 * _strlen - Checks string length
 * @s: Variable to check string length
 * Return: Always number counted
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
