#include "monty.h"

/**
 * _freesta - Frees memory allocated for stack.
 * @stack: ptr to stack.
 */
void _freesta(stack_t *stack)
{
stack_t *curren, *tmp;

curren = stack;

while (curren)
{
tmp = curren->next;
free(curren);
curren = tmp;
}
}
