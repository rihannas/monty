#include "monty.h"
/**
 * _isdigit - Determine if is it a number
 * @c: The evaluated input
 *
 * Description: Determine if is it a number between 0 and 9
 * Return: 1 if it is a number 0 if is not
 */
int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] < 48 || c[i] > 57)
			return (0);
	}
	return (1);
}
/**
 * rm_head - deletes head node
 * @head: pointer to list
 */

void rm_head(stack_t **head)
{
	stack_t *temp = *head, *temp_d = NULL;

	temp_d = temp;
	if ((*temp).next != NULL)
		(*temp).next->prev = NULL;
	*head = (*temp).next;
	free(temp_d);
}
/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const stack_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the beginning of the linked list
 *
 * Return: void
 */
void free_dlistint(stack_t *head)
{
	stack_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
