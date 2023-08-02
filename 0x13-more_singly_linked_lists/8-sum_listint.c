#include "lists.h"

/**
 * sum_listint - Sum of elements
 * @head: pointer to first node
 * Return: resulting sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
