#include "monty.h"

/**
  * get_mod - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_mod(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;
	int count = 0, temp1, temp2;

	while (t1->next)
	{
		count++;
		t1 = t1->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
		_free();
		exit(EXIT_FAILURE);
	}

	temp1 = (*stack)->n;
	if (temp1 == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_num);
		_free();
		exit(EXIT_FAILURE);
	}
	temp2 = ((*stack)->next)->n;
	((*stack)->next)->n = temp2 % temp1;
	get_pop(stack, line_num);
}
