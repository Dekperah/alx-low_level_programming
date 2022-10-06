#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: size
 *
 * Return: Pointer to allocated memory or normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == 0)
		exit(98);
	return (n);
}
