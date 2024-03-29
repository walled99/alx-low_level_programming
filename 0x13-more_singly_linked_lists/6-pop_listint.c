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
	int num;

	if (*head == NULL || head == NULL)
		return (0);
	num = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (num);
}
