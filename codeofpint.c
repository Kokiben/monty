#include "monty.h"
/**
 * code_pint - prints value at top of stack
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 * Return: -
*/
void code_pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: pint, stack empty\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
