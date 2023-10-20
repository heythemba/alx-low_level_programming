#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @s: s field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *s)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!head || !new_head)
		return (NULL);
	if (s)
	{
		new_head->str = strdup(s);
		if (!new_head->s)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->s);
	}

	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
