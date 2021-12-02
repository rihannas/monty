#include "monty.h"

/**
 * pop - removes an element from the top of the stack
 * @stack: double pointer to the top (head) of the stack
 * @line_number: no:of lines in a file
 *
 * Return - void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;

	free(tmp);
}
