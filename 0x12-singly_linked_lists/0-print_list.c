#include "lists.h"

/**
 * print_list - prints a singly linked list
 * @h: parameter
 * Return: num of nodes i of size_t
 */
size_t print_list(const list_t *h)
{
	list_h ptr = h;
	size_t i = 0;

	while (ptr != NULL)
	{
		if (str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		i = i + 1;
	}
	return (i);
}
