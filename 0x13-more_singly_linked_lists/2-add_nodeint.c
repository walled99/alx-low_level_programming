#include "lists.h"

/**
 * add_nodeint - Entry pointt
 * Description: add at the first of list
 * @head: pointer to pointer to struct
 * @n: integer in struct field
 * Return: a new node address
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *new;

	new = malloc(sizeof(struct listint_s));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
