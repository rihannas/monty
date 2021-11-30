#include "monty.h"

/**
 * push - push element into the stack
 * @stack: doubly linked list to store data
 * @ln: line number
 */
void push(stack_t **stack, unsigned int ln)
{
  char *n = global.argument;

  if ((is_digit(n)) == 0)
    {
      fprintf(stderr, "L%d: usage: push integer\n", ln);
      exit(EXIT_FAILURE);
    }

  if (global.data_struct == 1)
    {
      if (!add_node(stack, atoi(global.argument)))
	{
	  fprintf(stderr, "Error: malloc failed\n");
	  exit(EXIT_FAILURE);
	}
    }
  else
    {
      if (!add_node_queue(stack, atoi(global.argument)))
	{
	  fprintf(stderr, "Error: malloc failed\n");
	  exit(EXIT_FAILURE);
	}
    }
}
