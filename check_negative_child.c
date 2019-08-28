#include "holberton.h"
/**
 * check_negative_child - free buffer and print error.
 * @buffer: pointer that stores the std input string
 * Return: void.
 */
int check_negative_child(char *buffer, char **tokens)
{
	free(buffer);
	free(tokens);
	perror("Error");
	return (-1);
}
