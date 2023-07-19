#include "dog.h"

/**
 * free_dog - entry point
 * Description: free struct
 * @d: pointer
 * Return: nthing
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
