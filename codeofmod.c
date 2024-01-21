#include "monty.h"

/**
 * code_mod - Computes rest of division of second top element by top element.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */

void code_mod(stack_t **stack, unsigned int line_number)
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
fprintf(stderr, "L%d: can't calculate modulus, stack too short\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

curren = *stack;

if (curren->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

sum = (curren->next->n + curren->n) % curren->n;
curren->next->n = sum;
*stack = curren->next;
free(curren);
}
