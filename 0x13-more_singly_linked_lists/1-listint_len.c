#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: the number of nodes in the list_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		nums++;
		h = h->next;
	}
	return (nums);
}
