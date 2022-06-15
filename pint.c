#include "monty.h"
/**
 * _pint - print first element of the stack
 * @stack:Double pointer to the stack
 * @line_number: value for includein the stack
 * Return: Nothing.
 */
void _pint(sstack_t **stack, unsigned int line_number)
{
	if (*stack)
		printf("%d\n", (*stack)->n);
	else
	{
		STATUS[0] = 'F';
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);
	}
}
