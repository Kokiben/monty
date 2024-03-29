#include "monty.h"

/**
 * code_pchar - Prints the char at the top of the stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_pchar(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
fclose(trans.data);
free(trans.opcod);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

if ((*stack)->n < 0 || (*stack)->n > 127)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
fclose(trans.data);
free(trans.opcod);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

putchar((*stack)->n);
putchar('\n');
}
