#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node,
 * of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: position of node starting from 0
 *
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;

	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (n == index)
			break;
		n++;
		head = head->next;
	}
	return (head);
}
