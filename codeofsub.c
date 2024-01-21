#include "monty.h"

/**
 * code_sub - Subtracts top element from second top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_sub(stack_t **stack, unsigned int line_number)
{
stack_t *curren;
int stack_leng = 0, sum;

curren = *stack;

while (curren)
{
curren = curren->next;
stack_leng++;
}

if (stack_leng < 2)
{
fprintf(stderr, "L%d: can't subtract, stack too short\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

curren = *stack;
sum = curren->next->n - curren->n;
curren->next->n = sum;
*stack = curren->next;
free(curren);
}
