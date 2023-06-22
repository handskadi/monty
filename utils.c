#include "monty.h"



/**
 * init_args - Init a pointer to arg_s struct
 */
void init_args()
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		malloc_err();

	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_err();

	arguments->stream = NULL;
	arguments->head = NULL;
	arguments->line = NULL;
	arguments->n_tokens = 0;
	arguments->line_number = 0;
	arguments->stack_length = 0;
	arguments->stack = 1;
}



/**
* dump_args - dump memory alloc to args
*/

void dump_args()
{
	if (arguments == NULL)
		return;
	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}

	dump_head();

	if (arguments->line)
	{
		free(arguments->line);
		arguments->line = NULL;
	}
	free(arguments);
}

/**
 * get_stm - grab stream from the file.
 * @fn: file to open as the stream.
 */

void get_stm(char *fn)
{
	int fd;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", fn);
		dump_args();
		exit(EXIT_FAILURE);
	}
	arguments->stream = fdopen(fd, "r");
	if (arguments->stream == NULL)
	{
		close(fd);
		dprintf(2, "Error: Can't open file %s\n", fn);
		dump_args();
		exit(EXIT_FAILURE);
	}
}

/**
 * close_file - Closes the  stream and make it == NULL.
 */

void close_file(void)
{
	if (arguments->stream == NULL)
		return;

	fclose(arguments->stream);
	arguments->stream = NULL;
}

/**
* remove_node - delete node at the head/top
* Return: void
*/
void remove_node(void)
{
	stack_t *tmp;

	tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
}
