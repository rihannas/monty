#include "monty.h"

/**
 * mop_swap - swaps the top two elements of the stack
 * @stackk: pointer to a list
 * @n_line: line number of op command
 */
void mop_swap(stack_t **stackk, unsigned int n_line)
{
	int x, y;

	if (dlistint_len(*stackk) < 2)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", n_line);
		exit(EXIT_FAILURE);
	}
	x = (*stackk)->n;
	y = (*stackk)->next->n;
	(*stackk)->n = y;
	(*stackk)->next->n = x;
}
/**
 * mop_add - adds the top two elements of the stack.
 * @stack: pointer to a list
 * @n_line: line number of op command
 */
void mop_add(stack_t **stack, unsigned int n_line)
{
	int n = 0;

	if (dlistint_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't add, stack too short\n", n_line);
		exit(EXIT_FAILURE);
	}

	n += (*stack)->n;
	mop_pop(stack, n_line);
	(*stack)->n += n;
}
/**
 * mop_sub - subtracts the top two elements of the stack.
 * @stack: pointer to a list
 * @n_line: line number of op command
 */
void mop_sub(stack_t **stack, unsigned int n_line)
{
	int n = 0;

	if (dlistint_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't sub, stack too short\n", n_line);
		exit(EXIT_FAILURE);
	}

	n += (*stack)->n;
	mop_pop(stack, n_line);
	(*stack)->n -= n;
}
/**
 * mop_div- divides the top two elements of the stack.
 * @stack: pointer to a list
 * @n_line: line number of op command
 */
void mop_div(stack_t **stack, unsigned int n_line)
{
	int n = 0;

	if (dlistint_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't div, stack too short\n", n_line);
		exit(EXIT_FAILURE);
	}

	n += (*stack)->n;
	mop_pop(stack, n_line);
	if (n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", n_line);
		exit(EXIT_FAILURE);
	}

	(*stack)->n /= n;
}
/**
 * mop_mul - divides the top two elements of the stack.
 * @stack: pointer to a list
 * @n_line: line number of op command
 */
void mop_mul(stack_t **stack, unsigned int n_line)
{
	int n = 0;

	if (dlistint_len(*stack) < 2)
	{
		fprintf(stderr, "L%i: can't mul, stack too short\n", n_line);
		exit(EXIT_FAILURE);
	}

	n += (*stack)->n;
	mop_pop(stack, n_line);
	(*stack)->n *= n;
}
