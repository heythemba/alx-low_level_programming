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
 * @f: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *f)
{
	size_t check_len = 0;

	while (f)
	{
		printf("[%d] %s\n", _strlen(f->str), f->str ? f->str : "(nil)");
		f = f->next;
		i++;
	}
	return (check_len);
}
