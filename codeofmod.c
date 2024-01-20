#include "monty.h"

/**
 * code_mod - Computes rest of division of second top element by top element.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */

void code_mod(stack_t **stack, unsigned int line_number)
{

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
trans.status = EXIT_FAILURE;
return;
}
stack_t *tp;
tp = *stack;
*stack = (*stack)->next;

if (*stack != NULL)
{
(*stack)->prev = NULL;
}

if ((*stack)->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
trans.status = EXIT_FAILURE;
free(tp);
return;
}

(*stack)->n %= tp->n;
free(tp);
}
