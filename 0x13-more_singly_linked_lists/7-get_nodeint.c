#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * Description: index node
 * @head: pointer
 * @index: integer
 * Return: node
*/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr ? ptr : NULL);
}



