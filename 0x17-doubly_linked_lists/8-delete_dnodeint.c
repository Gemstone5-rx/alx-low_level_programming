#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node,
 * at index index of a dlistint_t linked list
 * @head: pointer to pointer to the head of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int number;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;
	number = 0;

	while (head1 != NULL)
	{
		if (number == index)
		{
			if (number == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = head2;
			}
			free(head1);
			return (1);
		}
		head2 = head1;
		head1 = head1->next;
		number++;
	}
	return (-1);
}
