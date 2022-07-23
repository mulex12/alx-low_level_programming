#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - an entry point
  * @d: pointer
  *
  * Return: none
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
