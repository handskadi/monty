#include "monty.h"

/**
 * mod - calculated the rest of div and give modulo
 * @stack: ptr to stack
 * @line_number: ln of ptr to stack
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	if (arguments->stack_length < 2)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", line_number);
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

	tmp2->n = tmp2->n % tmp1->n;
	remove_node();

	arguments->stack_length -= 1;
}

/**
 * pchar - print character 
 * @stack: ptr to stack
 * @line_number:  lin where fun is called
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;

	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		dump_all();
		exit(EXIT_FAILURE);
	}

	tmp1 = arguments->head;

	if (tmp1->n < 0 || tmp1->n > 127)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		dump_all();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", tmp1->n);
}

/**
 * pstr - print strs followed by ln
 * @stack: ptr to stack
 * @line_number: ln number where func is called
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;

	(void) stack;
	(void) line_number;

	tmp1 = arguments->head;

	while (tmp1 != NULL)
	{
		if (tmp1->n <= 0 || tmp1->n > 127)
			break;
		printf("%c", tmp1->n);
		tmp1 = tmp1->next;
	}

	printf("\n");
}

/**
 * rotl - flip by rotate to top
 * @stack: ptr to stack
 * @line_number: ln where is called
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;
	(void) line_number;
	if (arguments->stack_length < 2)
		return;

	tmp1 = arguments->head;
	tmp2 = tmp1->next;
	arguments->head = tmp2;
	while (tmp2)
	{
		if (tmp2->next == NULL)
		{
			tmp2->next = tmp1;
			tmp1->next = NULL;
			tmp1->prev = tmp2;
			break;
		}

		tmp2 = tmp2->next;
	}
}

/**
 * rotr - flip by rotating to bootom
 * @stack: ptr to stck.
 * @line_number: ln where func is called
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *last;

	(void) stack;
	(void) line_number;
	if (arguments->stack_length < 2)
		return;

	tmp = arguments->head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			last = tmp;
			break;
		}
		tmp = tmp->next;
	}

	last->prev->next = NULL;
	last->next = arguments->head;
	last->prev = NULL;

	arguments->head = last;
}

/**
 * queue - sets the format of  data to a queue
 * @stack: ptr to stck
 * @line_number: Ln nmbr where multipy is called
 */

void queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	arguments->stack = 0;
}


/**
 * stack - sets the format
 * @stack: ptr to stack
 * @line_number: Line number where the mul function is called.
 */

void stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	arguments->stack = 1;
}
