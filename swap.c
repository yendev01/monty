#include "monty.h"

/**
  * get_swap - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_swap(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *temp1, *temp2, *t1 = *stack;
	int count = 0;

	while (t1)
	{
		count++;
		t1 = t1->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", line_num);
		exit(EXIT_FAILURE);
	}

	temp1 = *stack;
	*stack = (*stack)->next;
	temp2 = (*stack)->next;
	temp1->next = temp2;
	temp2->prev = temp1;
	(*stack)->next = temp1;
	(*stack)->prev = NULL;
}

