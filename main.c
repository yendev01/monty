#include "monty.h"

/**
  * main - entry point to project
  * @argv: ...
  * @argc: ...
  * Return: ...
  */

int main(int argc, char *argv[])
{
	int fd, buff_size = 1024;
	char *buff, *temp = NULL;
	stack_t *stack = NULL;
	unsigned int d = 0;
	void (*p)(stack_t **stack, unsigned int line_number);

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[argc - 1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[argc - 1]);
		close(fd), exit(EXIT_FAILURE);
	}
	buff = malloc(buff_size * sizeof(char));
	if (!buff)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	while ((getline(&buff, &buff_size, fd)) != -1)
	{
		d++, temp = strtok(buff, " \n\t\r");
		if (temp)
		{
			p = get_func(temp);
			if (!p)
			{
				fprintf(stderr, "L%d: unknown instruction ", d);
				free(buff), exit(EXIT_FAILURE);
			}
			p(&stack, d);
		}
	}
	free(buff), close(fd);
	return (0);
}
