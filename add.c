#include "monty.h"

/**
 * add - add the first two elemnts of a stack
 * @stack: double pointer to the top (head) of the stack
 * @line_number: no:of lines in a file
 *
 * Return - void
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || (*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *tmp;
	int result;

	tmp = *stack;

	result = (tmp->next->n) + (tmp->n);
	tmp->next->n = result;

	*stack = tmp->next;

	free(tmp);
}
