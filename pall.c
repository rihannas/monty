#include "monty.h"

/**
 * pall - calls print_stack func
 * @stack: doubly linked list to store data
 * @ln: line number
 */
void pall(stack_t **stack, unsigned int ln __attribute__((unused)))
{
  print_stack(*stack);
}
