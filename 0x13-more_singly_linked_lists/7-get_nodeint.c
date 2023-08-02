#include "lists.h"
11;rgb:0000/0000/0000
/**
 * get_nodeint_at_index - entry point
 * Description: index node
 * @head: pointer
 * @index: integer
 * Return: node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	ptr = head;
	if (index < 0)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
