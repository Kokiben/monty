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

if (!trans.payload || (trans.payload[0] == '-' && (trans.payload[1] == '\0' || !isdigit(trans.payload[1]))))
stand = 1;
else
{
for (; trans.payload[k] != '\0'; k++)
{
if (!isdigit(trans.payload[k]))
stand = 1;
}
}
if (stand)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
if (trans.data)
{
fclose(trans.data);
}
free(trans.opcode);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

i = atoi(trans.payload);
if (trans.status == 0)
opnod_add(stack, i);
else
opqueu_add(stack, i);
}

/**
 * code_pall - Prints top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_pall(stack_t **stack, unsigned int line_number)
{
if (*stack != NULL)
{
printf("%d\n", (*stack)->n);
}
else
{
(void)line_number;
}
}
