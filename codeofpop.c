#include "monty.h"

/**
 * code_pop - Rmv top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_pop(stack_t **stack, unsigned int line_number)
{
stack_t *tp;
tp = *stack;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(trans.data);
_freesta(*stack);
exit(EXIT_FAILURE);
}

*stack = (*stack)->next;

if (*stack != NULL)
{
(*stack)->prev = NULL;
}

free(tp);
}
