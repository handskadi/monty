#include "monty.h"

/**
 * malloc_err - malloc error handler
 */

void malloc_err(void)
{
	dprintf(2, "Error: malloc failed\n");
	dump_args();
	exit(EXIT_FAILURE);
}

/**
 * dump_head - Frees the memory allocated for the head and
 * sets it to NULL.
 */

void dump_head(void)
{
	if (arguments->head)
		dump_stack(arguments->head);

	arguments->head = NULL;
}

/**
 * check_args - check args number.
 * @argc: args to be counted.
 */

void check_args(int argc)
{
	if (argc == 2)
		return;
		
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}