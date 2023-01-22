#include "monty.h"

/**
  * get_mul - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_mul(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;
	int count = 0, temp1, temp2;

	while (t1)
	{
		count++;
		t1 = t1->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
		_free();
		exit(EXIT_FAILURE);
	}

	temp1 = (*stack)->n;
	temp2 = ((*stack)->next)->n;
	((*stack)->next)->n = temp1 * temp2;
	get_pop(stack, line_num);
}

