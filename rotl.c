#include "monty.h"

/**
  * get_rotl - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_rotl(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *temp1, *temp2;

	temp1 = *stack;
	*stack = (*stack)->next;

	temp2 = (*stack)->next;
	while (temp2)
	{
		temp2 = temp2->next;
	}
	temp1->prev = temp2;
	temp2->next = temp1;
	temp1->next = NULL;
	(*stack)->prev = NULL;
}