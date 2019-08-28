#include "holberton.h"
/**
 * sw_enter_key - function that changes enter key for end of line character
 * @buffer: pointer that stores the stdinput.
 * Return: buffer.
 */
char *sw_enter_key(char *buffer)
{
	int buff_size = 0;

	buff_size = _strlen(buffer);
	buffer[buff_size - 1] = '\0';
	return (buffer);
}
