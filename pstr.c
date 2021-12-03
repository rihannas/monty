#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: double pointer to the head of the stack
 * @line_number: the number of a line of the file
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	(void) line_number;

	while (tmp)
	{
		if (tmp->n != 0 && isascii(tmp->n))
			putchar(tmp->n);
		else
			break;

		tmp = tmp->next;
	}

	putchar('\n');
}
