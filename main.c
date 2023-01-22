#include "monty.h"

/**
  * main - entry point to project
  * @argv: ...
  * @argc: ...
  * Return: ...
  */

int main(int argc, char *argv[])
{
	int buff_size = 1024;
	char buff[1024], *temp = NULL;
	unsigned int d = 0;
	void (*p)(stack_t **stack, unsigned int line_number);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[argc - 1]);
		fclose(fd), exit(EXIT_FAILURE);
	}
	/*
	*buff = malloc(buff_size * sizeof(char));
	*if (!buff)
	*{
	*	fprintf(stderr, "Error: malloc failed\n");
	*	fclose(fd), exit(EXIT_FAILURE);
	*}
	**/
	while (fgets(buff, buff_size, fd) != NULL)
	{
		d++, temp = strtok(buff, " \n\t\r");
		if (temp)
		{
			p = get_func(temp);
			if (!p)
			{
				fprintf(stderr, "L%d: unknown instruction%s\n", d, temp);
				fclose(fd), exit(EXIT_FAILURE);
			}
			p(&stack, d);
		}
	}
	_free(), fclose(fd);
	return (0);
}
