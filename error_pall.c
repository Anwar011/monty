#include<monty.h>
/**
* error_pall - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_pall(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, var1.line_read);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}
