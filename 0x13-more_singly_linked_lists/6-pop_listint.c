#include "lists.h"

/**
 * pop_listint - entry points
 * Description: delete first node
 * @head: pointer to pointer
 * Return: integer value
*/


int pop_listint(listint_t **head)
{
        listint_t *ptr;
	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	return (ptr->n);
}
