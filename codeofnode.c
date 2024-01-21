#include "monty.h"

/**
 * opnod_add - Add a new node to the top of the stack.
 * @stack: Ptr to stack.
 * @value: Value to be added to stack.
 */
void opnod_add(stack_t **stack, int value)
{
stack_t *new_elem, *curren;

curren = *stack;
new_elem = malloc(sizeof(stack_t));

if (new_elem == NULL)
{
fprintf(stderr, "Error: Unable to allocate memory\n");
exit(EXIT_FAILURE);
}

if (curren)
curren->prev = new_elem;

new_elem->n = value;
new_elem->next = *stack;
new_elem->prev = NULL;
*stack = new_elem;
}

/**
 * opqueu_add - Add a new node to the end of the queue.
 * @stack: Ptr to stack.
 * @value: Value to be added to queue.
 */
void opqueu_add(stack_t **stack, int value)
{
stack_t *new_elem, *curren;

curren = *stack;
new_elem = malloc(sizeof(stack_t));

if (new_elem == NULL)
{
fprintf(stderr, "Error: Unable to allocate memory\n");
exit(EXIT_FAILURE);
}

new_elem->n = value;
new_elem->next = NULL;

if (curren)
{
while (curren->next)
curren = curren->next;
}

if (!curren)
{
*stack = new_elem;
new_elem->prev = NULL;
}
else
{
curren->next = new_elem;
new_elem->prev = curren;
}
}
