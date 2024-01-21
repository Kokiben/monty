#include "monty.h"

/**
 * code_sub - Subtracts top element from second top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_sub(stack_t **stack, unsigned int line_number)
{

stack_t *curren;
int stract, sum;

curren = *stack;
for (sum = 0; curren != NULL; sum++)
curren = curren->next;


if (sum < 2)
{
fprintf(stderr, "L%d: can't subtract, stack too short\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

curren = *stack;
stract = curren->next->n - curren->n;
curren->next->n = stract;
*stack = curren->next;
free(curren);
}
