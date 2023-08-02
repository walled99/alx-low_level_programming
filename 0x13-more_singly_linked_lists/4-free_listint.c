#include "lists.h"

/**
 * free_listint - entry point
 * Description: free each node
 * @head: pointer to first node
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}

}
