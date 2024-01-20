#include "monty.h"

/**
 * code_swap - Swaps top two elements of stack.
 * @stack: ptr to stack.
 * @line_number: Line number of the opcode.
 */
void code_swap(stack_t **stack, unsigned int line_number)
{
stack_t *tp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
trans.status = EXIT_FAILURE;
return;
}

tp = (*stack)->next;
(*stack)->next = tp->next;
if (tp->next != NULL)
tp->next->prev = *stack;
tp->prev = NULL;
tp->next = *stack;
(*stack)->prev = tp;
*stack = tp;
}
