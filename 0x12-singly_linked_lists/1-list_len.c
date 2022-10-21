#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list_t list
 * Return: number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	int nodeLen = 0;

	while (h != NULL)
	{

		nodeLen++;

		h = h->next;
	}
	return (nodeLen);
}
