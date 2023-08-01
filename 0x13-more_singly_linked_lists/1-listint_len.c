#include "lists.h"

/**
 * print_listint - entry point
 * Description: count number of nodes
 * @h: pointer to lists
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
