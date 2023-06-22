#include "monty.h"

/**
 * add - insert element to stack
 * @stack: ptr to stack
 * @line_number: index of ptr to be pushed to stack
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n",
				line_number);
		dump_all();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	tmp2->n = tmp1->n + tmp2->n;
	remove_node();

	arguments->stack_length -= 1;
}

/**
 * nop - opcode nop doesn’t do anything.
 * @stack: ptr to stack.
 * @line_number: index of ptr to be pushed to stack
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

/**
 * sub - substruct elements
 * @stack: ptr to stack
 * @line_number: index number where ptr point to in stack
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		dump_all();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	tmp2->n = tmp2->n - tmp1->n;
	remove_node();

	arguments->stack_length -= 1;
}

/**
 * _div - div elements
 * @stack: ptr to stack
 * @line_number: line to be pointed to 
 */

void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		dump_all();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	if (tmp1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		dump_all();
		exit(EXIT_FAILURE);
	}

	tmp2->n = tmp2->n / tmp1->n;
	remove_node();

	arguments->stack_length -= 1;
}

/**
 * mul - Muty elmts in stack
 * @stack: ptr to stack
 * @line_number: line n to be pointed to by pointer
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		dump_all();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;
	tmp2 = tmp1->next;

	tmp2->n = tmp2->n * tmp1->n;
	remove_node();

	arguments->stack_length -= 1;
}
