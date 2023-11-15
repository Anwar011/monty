#include "monty.h"
/**
* push - that push at top
* @stack: pointer to stack
* @line_number: giver number of line
*/
void push(stack_t **stack, unsigned int line_number)
{
	char *value = NULL;

	value = strtok(NULL, " ");
	if (value && isinteger(value))
	{
		var1.val_read = atoi(value);
		if (!strcmp(var1.type, "queue"))
		{
			if (!pushqueue(stack, var1.val_read))
				error_memory(stack, line_number);
		}
		else
		{
			if (!pushstack(stack, var1.val_read))
				error_memory(stack, line_number);
		}
	}
	else
		error_push(stack, line_number);
}

