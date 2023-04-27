#include "shell.h"

/**
 * *_read_input - reads inputs from user
 * Return: Always input
 */
char *_read_input()
{
	static char f[buf];
	static int index;
	static int bytes;
	char c, *input;

	if (index >= bytes)
	{
		bytes = read(STDIN_FILENO, f, buf);
		if (bytes < 0)
		{
			return (NULL);
		}
		else if (bytes == 0)
		{
			return (NULL);
		}
		index = 0;
	}
	c = f[index++];
	input = malloc(sizeof(char) * 2);
	if (input == NULL)
	{
		return (NULL);
	}
	input[0] = c;
	input[1] = '\0';
	return (input);
}

/**
 * *_getline - assisgns buffer to r and reads inputs
 * Return: Always line read
 */
char *_getline()
{
	char *line, *input;
	int li;

	line = malloc(sizeof(char) * buf);
	if (line == NULL)
	{
		return (NULL);
	}
	li = 0;
	while (1)
	{
		input = _read_input(buf);
		if (input == NULL)
		{
			free(line);
			return (NULL);
		}
		if (*input == '\n')
		{
			free(input);
			break;
		}
		if (li >= buf - 1)
		{
			free(input);
			free(line);
			return (NULL);
		}
		line[li++] = *input;
		free(input);
	}
	line[li] = '\0';
	return (line);
}
