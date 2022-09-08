#ifndef _MONTY_
#define _MONTY_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

stack_t *push_stack(stack_t **head, const int n);
stack_t *push_on_head(stack_t **head, const int n);
void print_stack(const stack_t *h);
void print_top(const stack_t *h);
void free_stack(stack_t *h);
void pop_stack(stack_t **h);
void swap_stack(stack_t **h);

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void handle_push(stack_t **stack, unsigned int line);
void handle_pall(stack_t **stack, unsigned int line);
void handle_void(stack_t **stack, unsigned int line);
void handle_pint(stack_t **stack, unsigned int line);
void handle_pop(stack_t **stack, unsigned int line);
void handle_swap(stack_t **stack, unsigned int line);

extern instruction_t main_instruction;

#endif
