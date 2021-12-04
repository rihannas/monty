#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Global */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int n_line);
} instruction_t;

/* Main Functions */
void read_file(FILE *fd, char *file_name);
void (*opcode_func(char *s))(stack_t **stack, unsigned int n_line);

/* Opcode Functions */
void mop_push(stack_t **stack, unsigned int n_line);
void mop_pall(stack_t **stack, unsigned int n_line);
void mop_pint(stack_t **stack, unsigned int n_line);
void mop_nop(stack_t **stack, unsigned int n_line);
void mop_pop(stack_t **stack, unsigned int n_line);
void mop_swap(stack_t **stackk, unsigned int n_line);
void mop_add(stack_t **stack, unsigned int n_line);
void mop_sub(stack_t **stack, unsigned int n_line);
void mop_div(stack_t **stack, unsigned int n_line);
void mop_mul(stack_t **stack, unsigned int n_line);
void mop_mod(stack_t **stack, unsigned int n_line);

/* Aux Functions */
int _isdigit(char *c);
void rm_head(stack_t **head);
size_t dlistint_len(const stack_t *h);
void free_dlistint(stack_t *head);
#endif
