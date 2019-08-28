#include "holberton.h"
/**
 * no_mem_ptr - checks non-memory-ptr
 * @ptr: ptr that will be freed
 * Return: ptr if isn't a non-memory-ptr.
 */
char *no_mem_ptr(char *ptr)
{
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
