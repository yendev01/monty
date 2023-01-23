#include "monty.h"

/**
  * get_rotr - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_rotr(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *temp1, *temp2, *temp3;

	if (!*stack || ((*stack)->next == NULL))
	{
		;
	}
	else
	{
		temp1 = temp2 = *stack;
		while (temp2->next)
		{
			temp3 = temp2;
			temp2 = temp2->next;
		}

		temp3->next = NULL;
		temp1->prev = temp2;
		temp2->next = temp1;
		temp2->prev = NULL;
		(*stack) = temp2;
	}
}
