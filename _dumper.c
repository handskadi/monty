#include "monty.h"


/**
 * dump_all - dump all allocated memory for args.
 */

void dump_all(void)
{
	close_file();
	dump_tokens();
	dump_args();
}

/**
* dump_stack - empty all the nodes in the stack list
* @head: first node of a link
*/
void dump_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		dump_stack(head->next);
	}

	free(head);
} 

/**
 * dump_tokens - dump the reserved  memory for tokns.
 */

void dump_tokens(void)
{
	int i = 0;

	if (arguments->tokens == NULL)
		return;

	while (arguments->tokens[i])
	{
		free(arguments->tokens[i]);
		i++;
	}
	free(arguments->tokens);
	arguments->tokens = NULL;
}