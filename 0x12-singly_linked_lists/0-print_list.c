#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: the string length to check
 *
 * Return: int length of str
 */

int _strlen(char *s)
{
	int check_len = 0;

	if (!s)
	return (0);
	while (*s++)
	check_len++;
	return (check_len);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t check_len = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), 
				h->str ? h->str : "(nil)");
		h = h->next;
		check_len++;
	}
	return (check_len);
}
