#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead = NULL, *behind = NULL;

	if (!head || !*head)
		return (NULL);

	ahead = *head;
	*head = NULL;
	while (ahead)
	{
		behind = ahead->next;
		ahead->next =  *head;
		*head = ahead;
		ahead = behind;
	}
	return (*head);
}

