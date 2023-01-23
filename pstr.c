#include "monty.h"

/**
  * get_pstr - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_pstr(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;
	int num;

	if (!*stack)
	{
		printf("\n");
		_free(), exit(EXIT_FAILURE);
	}

	while (t1)
	{
		num = t1->n;
		if (num > 0 && num <= 255)
		{
			printf("%c", num);
		}
		else if (num == 0)
		{
			break;
		}
		else
		{
			_free();
			exit(EXIT_FAILURE);
		}
		t1 = t1->next;
	}
}
