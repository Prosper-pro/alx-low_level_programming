#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: no of bytes
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
