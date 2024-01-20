#include "monty.h"

/**
 * code_swap - Swaps top two elements of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_swap(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
fclose(trans.data);
_freesta(*stack);
exit(EXIT_FAILURE);
}

stack_t *tp1 = *stack;
stack_t *tp2 = (*stack)->next;

tp1->next = tp2->next;
tp1->prev = tp2;

if (tp2->next != NULL)
{
tp2->next->prev = tp1;
}

tp2->next = tp1;
tp2->prev = NULL;

*stack = tp2;
}
