#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Function prototypes */
void push(stack_t **stack, unsigned int line_number);

/**
 * struct anwarvariable - global variabels
 * @val_read: the value readed
 * @line_read: the line readed
 * @file_read: the stream of the file readed
 * @type: define type of storing set stack as default
 * Description: the global variables that we used
 */
typedef struct anwarvariable
{
	int val_read;
	char *line_read;
	FILE *file_read;
	char *type;
} global;

extern global var1;

#endif
