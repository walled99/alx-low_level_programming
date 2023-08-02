#include "lists.h"
11;rgb:0000/0000/0000
/**
 * free_listint2 - Entry point
 * Description: free list
 * @head: pointer to pointer list
 * Return: NULL
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
