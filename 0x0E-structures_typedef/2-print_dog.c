#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Entry point
 * Description: print struct elements
 * @d: pointer
 * Return: Nothing
*/

void print_dog(struct dog *d)
{
	char *e = "(nil)";

	if (d == NULL)
		exit(0);
	else
	{
		printf("Name: %s\n", d->name ? d->name : e);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : e);
	}
}
