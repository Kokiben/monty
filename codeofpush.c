#include "monty.h"

/**
* code_push :  pushe an element to stack.
* @stack : ptr of the stack.
* @line_number : int present line index within the Monty opcode.
*
*/
void code_push(stack_t **stack, unsigned int line_number)
{
int i, k = 0, stand = 0;
if (trans.payload)
{
if (trans.payload[0] == '-')
k++;
for (; trans.payload[k] != '\0'; k++)
{
if (trans.payload[k] > 57 || trans.payload[k] < 48)
stand = 1;
}
if (stand == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}
i = atoi(trans.payload);
opnod_add(stack, i);
}

/**
 * code_pall - Prints top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_pall(stack_t **stack, unsigned int line_number)
{
stack_t *curren = *stack;

(void)line_number;

while (curren)
{
printf("%d\n", curren->n);
curren = curren->next;
}
}
