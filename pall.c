#include "monty.h"

/**
 * pall - calls print_stack func
 * @stack: doubly linked list to store data
 * @line_number: no:of lines in a file
 */
void pall(stack_t **stack, unsigned int line_number)
{
  stack_t *tmp;
  tmp = *stack;

  if (tmp == NULL)
  {
	  return;
  }

  (void) line_number;

  while (tmp)
  {
	  printf("%d\n", tmp->n);
	  tmp = tmp->prev;
  }
}
