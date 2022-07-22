#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - an entry point to reallocate old ptr to new
 * @ptr: old one
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *mypointer;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
       mypointer = malloc(sizeof(char) * new_size);
	if (mypointer == NULL)
		return (NULL);
	if (ptr)
	{
		for (i = 0; i < old_size; i++)
		{
			mypointer[i] = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (mypointer);
}
