#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * Description: add at the end
 * @head: double pointter
 * @n: integer
 * Return: address of new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while ((*head)->next != NULL)
		*head = (*head)->next;
	(*head)->next = new;
}
