#include "monty.h"

/**
  * get_sub - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_sub(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;
	int count = 0, temp1, temp2;

	while (t1)
	{
		count++;
		t1 = t1->next;
	}
	if (count < 1 || !*stack)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
		_free();
		exit(EXIT_FAILURE);
	}

	temp1 = (*stack)->n;
	temp2 = ((*stack)->next)->n;
	((*stack)->next)->n = temp2 - temp1;
	get_pop(stack, line_num);
}

