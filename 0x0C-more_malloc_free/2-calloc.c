#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array
 * @size: memory size
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 * Otherwise - a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	f = x;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (x);
}
