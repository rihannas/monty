#include "monty.h"
/**
 * mop_push - pushes an element to the stack
 * @stack: Double pointer input
 * @n_line: line number
 *
 * Description: This function pushes an element to the stack.
 * Return: Nothing.
 */
void mop_push(stack_t **stack, unsigned int n_line)
{
	stack_t *node;
	char delim[] = " \n\t";
	char *s;
	int num, flag, sign = 1;

	s = strtok(NULL, delim);
	if (!s)
	{
		fprintf(stderr, "L%d: usage: push integer\n", n_line);
		exit(EXIT_FAILURE);
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	flag = _isdigit(s);
	if (flag == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", n_line);
		exit(EXIT_FAILURE);
	}
	num = atoi(s) * sign;
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = num;
	node->next = *stack;
	node->prev = NULL;
	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
/**
 * mop_pall - prints all the values on the stack
 * @stack: Double pointer input
 * @n_line: line number
 *
 * Description: prints all the values on the stack,
 * starting from the top of the stack.
 * Return: Nothing.
 */
void mop_pall(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp = *stack;
	(void)n_line;

	if (!stack || !*stack)
		return;
	while (tmp)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * mop_pint - prints the value at the top
 * @stack: Double pointer input
 * @n_line: line number
 *
 * Description: prints the value at the top of the stack.
 * Return: Nothing.
 */
void mop_pint(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp = *stack;
	(void)n_line;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", n_line);
		exit(EXIT_FAILURE);
	}

	else if (!stack || !*stack)
		return;
	printf("%i\n", tmp->n);
}

/**
 * mop_nop - Doesn’t do anything
 * @stack: Double pointer input
 * @n_line: line number
 *
 * Description: Doesn’t do anything.
 * Return: Nothing.
 */
void mop_nop(stack_t **stack, unsigned int n_line)
{
	(void)**stack;
	(void)n_line;
}

/**
 * mop_pop - removes an item from a stack
 * @stack: pointer to a list
 * @n_line: line number of op command
 */
void mop_pop(stack_t **stack, unsigned int n_line)
{

	if (*stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", n_line);
		exit(EXIT_FAILURE);
	}
	else
	{
		rm_head(stack);
	}
}
