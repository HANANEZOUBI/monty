#include "monty.h"

/**
 * top - Print the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: the line number of of the opcode.
 */

void top(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		error1(6, line_number);
	printf("%d\n", (*stack)->n);
}
