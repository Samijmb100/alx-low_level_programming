#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints a singly linked list
 * @h: parameter
 * Return: num of nodes i of size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;

	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
