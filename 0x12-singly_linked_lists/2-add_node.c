#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: list_t to add new node
 * @str: string to add
 * Return: address of new element else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new_node;
	int len = 0;

	dup = strdup(str);

	new_node = malloc(sizeof(list_t));

	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (new_node == NULL)
		return (NULL);

	while (*str != '\0')
	{
		len++;
		str++;
	}
	new_node->str = dup;
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
