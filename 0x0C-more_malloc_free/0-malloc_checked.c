#include "main.h"

/**
 * malloc_checked - checks malloc
 * @b: unsigned int parameter
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
