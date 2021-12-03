#include "monty.h"

/**
 * mul - multiplies the second top element of the stack with the top element
 * of the stack.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of the line in file
 *
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int product;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	product = tmp->next->n * tmp->n;
	tmp->next->n = product;

	*stack = tmp->next;

	free(tmp);
}
