#include "holberton.h"
/**
 * tok_buffer - function that tokenizes the buffer in strings
 * @tokens: double pointer that stores the strings of the buffer
 * @buffer: pointer that stores the std input string
 * Return: tokens.
 */
char **tok_buffer(char **tokens, char *buffer)
{
	char *delim = " \n\t\a";
	int n = 1;

	tokens[0] = strtok(buffer, delim);
	while ((tokens[n] = strtok(NULL, delim)))
		n++;
	return (tokens);
}
