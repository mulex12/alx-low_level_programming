#include "main.h"

/**
 * malloc_checked - entry point to allocate memory
 * @b: whatever they give you
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
