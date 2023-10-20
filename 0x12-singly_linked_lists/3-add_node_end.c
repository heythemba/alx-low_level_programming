#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: address of pointer to head node
 * @s: str field of node
 *
 * Return: size of list
 */
list_t *add_node_end(list_t **head, const char *s)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_node)
		return (NULL);
	if (s)
	{
		new_node->s = strdup(s);
		if (!new_node->s)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->s);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
