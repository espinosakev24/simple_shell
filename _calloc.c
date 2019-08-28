#include "holberton.h"
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: s pointer with the space filled with 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = (char *)malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	for (n = 0; n < (nmemb * size); n++)
	{
		s[n] = '\0';
	}
	return (s);
}
