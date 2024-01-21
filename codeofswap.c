#include "monty.h"

/**
 * code_swap - Swaps top two elements of stack.
 * @stack: ptr to stack.
 * @line_number: Line number of the opcode.
 */
void code_swap(stack_t **stack, unsigned int line_number)
{
stack_t *curren;
int len = 0, tp;

curren = *stack;
while (curren)
{
curren = curren->next;
len++;
}

if (len < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

curren = *stack;
tp = curren->n;
curren->n = curren->next->n;
curren->next->n = tp;
}
