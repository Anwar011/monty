#include "monty.h"
/**
* error_push - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_push(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_num);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

