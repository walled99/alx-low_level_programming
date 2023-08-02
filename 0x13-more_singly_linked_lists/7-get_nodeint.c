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
	int i;

	if (index < 0)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
