#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Print the doubly linkedlist of integers
 * @h: The pointer address to be the first element of the list
 * Return: The number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
