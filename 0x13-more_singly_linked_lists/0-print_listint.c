/*
 * file: 0-print_listint.c
 * auth: Alaa Eldin
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: the number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nums++;
		h = h->next;
	}
	return (nums);
}
