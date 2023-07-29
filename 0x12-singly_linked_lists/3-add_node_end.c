#include "lists.h"

/**
 * add_node_end - Entry points
 * Description: add new node to end of linked list
 * @head: double pointerr
 * @str: pointer to string in struct
 *
 * Return: address of new node in list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *update = *head;
	unsigned int l = 0;

	while (str[l])
	{
		l++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (update->next)
		update = update->next;

	update->next = new;
	return (new);
}
