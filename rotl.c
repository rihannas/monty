#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *top;

	if (!stack || !(*stack) || !(*stack)->next)
		return;

	tmp = *stack;

	top = tmp->next;
	top->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;

	(*stack)->next = NULL;
	(*stack)->prev = tmp;

	*stack = top;

	(void) line_number;
}
