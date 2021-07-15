#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest int
 * @max: smallest int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a = malloc(sizeof(int) * s);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		a[i] = min++;

	return (a);
}
