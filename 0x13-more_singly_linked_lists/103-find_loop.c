#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search in loop
 *
 * Return: address of node where loop starts/returns, NULL if not in loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *finish;

	if (head == NULL)
		return (NULL);
	for (finish = head->next; finish != NULL; finish = finish->next)
	{
		if (finish == finish->next)
			return (finish);
		for (ptr = head; ptr != finish; ptr = ptr->next)
			if (ptr == finish->next)
				return (finish->next);
	}

	return (NULL);
}
