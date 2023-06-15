#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements,
 * in a doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
