#include "shell.h"

/**
 * _memcpy - Copies memory
 * @dest: The destination of content
 * @


void _memcpy(void *dest, const void *src, unsigned int n)
{
	char *srcptr = (char *)src;
	char *destptr = (char *)dest;

	while (n > 0)
	{
		destptr[n - 1] = srcptr[n - 1];
		n--;
	}
	destptr[n] = '\0';
}

/**
 * _realloc - allocates new memory
 * @ptr: void pointer
 * @os: old size
 * @nsize: new size
 */


void *_realloc(void *ptr, size_t os, size_t nsize)
{
	void *nptr;

	if (ptr == NULL)
	{
		return (malloc(nsize));
	}
	if (nsize == 0)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(nsize);

	if (nptr == NULL)
	{
		return (NULL);
	}
	if (nsize < os)
	{
		_memcpy(nptr, ptr, nsize);
	}
	else
	{
		_memcpy(nptr, ptr, os);
	}
	free(ptr);
	return (nptr);
}
