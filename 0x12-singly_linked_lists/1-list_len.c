#include "lists.h"

/**
 * list_len - Entry point
 * Description: length of linked list
 * @h: pointer to struct
 * Return: unsigned integer
*/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
