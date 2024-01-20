#include "monty.h"

/**
 * code_div - Divides second top element by top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_div(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
fclose(trans.data);
_freesta(*stack);
exit(EXIT_FAILURE);
}

stack_t *tp = *stack;
*stack = (*stack)->next;

if (tp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
fclose(trans.data);
_freesta(*stack);
exit(EXIT_FAILURE);
}

(*stack)->n /= tp->n;
(*stack)->prev = NULL;

free(tp);
}
