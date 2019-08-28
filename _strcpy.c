#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 * @src: pointer to the source string
 * @dest: Pointer that will take the source value
 * Return: Always dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	if (src == NULL)
	{
		return (NULL);
	}
	while (src[n] != '\0' && dest[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);

}
