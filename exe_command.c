#include "holberton.h"
/**
 * exec_command - function that search a command and executes it.
 * @tokens: Is a double pointer that stores the buffer tokenized
 * @buffer: pointer that stores the string passed in the std input
 * @environ: double pointer to the environ variable.
 * Return: void.
 */
void exec_command(char **tokens, char *buffer, char **environ)
{
	char *str_command;

	str_command = check_path(get_env("PATH"), tokens[0], tokens, environ);
	if (access(str_command, F_OK))
	{
		execve(tokens[0], tokens, NULL);
		perror("Error");
		free(tokens);
		free(buffer);
		exit(EXIT_FAILURE);
	}
}

