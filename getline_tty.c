#include "holberton.h"
/**
 * getline_tty - function that read a line and checks teletypes
 * @buffer: string that will stores the input
 * @tokens: double pointer that stores the buffer string
 * Return: buffer.
 */
char *getline_tty(char *buffer, char **tokens)
{
	int tty = isatty(STDIN_FILENO);
	size_t size = 32;
	int input;

	if (tty == 1)
	{
		write(1, "$ ", 2);
	}
	input = getline(&buffer, &size, stdin);
	if (tty == 0 && input == EOF)
	{
		free_grid(tokens);
		free(buffer);
		exit(0);
	}

	if (input == EOF)
	{
		free(tokens);
		free(buffer);
		write(1, "\n", 1);
		exit(0);
	}
	return (buffer);
}
