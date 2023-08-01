#include "lists.h"

/**
 * print_listint - entry point
 * Description: print list and number of nodes
 * @h: pointer to list
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
