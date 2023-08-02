#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * Description: insert node at specefic index
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current;
	listint_t *temp = *head;

	current = malloc(sizeof(listint_t));
	if (!current || !head)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			current->next = temp->next;
			temp->next = current;
			return (current);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
