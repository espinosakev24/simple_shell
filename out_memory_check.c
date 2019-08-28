#include "holberton.h"
/**
 * out_memory_check - function that checks no-memory pointer
 * @ptr: ptr that will be checked
 * Return: ptr if fails.
 */
char **out_memory_check(char **ptr)
{
	if (ptr == NULL)
	{
		free_grid(ptr);
		return (NULL);
	}
	return (ptr);
}
