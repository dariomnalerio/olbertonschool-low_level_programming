#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds new node at the end of a list
 * @head: Pointer to the head of the list
 * @str: String to be added to new node
 *
 * Return: NULL if it fails. Otherwise, addres of the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup = strdup(str);
	int len = 0;
	list_t *last, *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL) /* Only one node */
		*head = new;

	else /* Multiple nodes */
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
