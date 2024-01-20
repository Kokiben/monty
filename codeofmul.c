#include "monty.h"

/**
 * code_mul - Multiplies second top element by top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_mul(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
fclose(trans.data);
_freesta(*stack);
exit(EXIT_FAILURE);
}

stack_t *tp = *stack;
*stack = (*stack)->next;
(*stack)->n *= tp->n;
(*stack)->prev = NULL;

free(tp);
}
