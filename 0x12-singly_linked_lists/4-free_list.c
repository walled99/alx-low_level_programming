#include "lists.h"

/**
 * free_list - Entry points
 * @head: struct point
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
