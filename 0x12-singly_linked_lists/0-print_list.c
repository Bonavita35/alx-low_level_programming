#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the node
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodeLen = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodeLen++;

		h = h->next;
	}
	return (nodeLen);
}
