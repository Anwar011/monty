#include<monty.h>
/**
* pall - that gives pall
* @stack: pointer to stack
* @line_number: giver number of line
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	(void)line_number;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
