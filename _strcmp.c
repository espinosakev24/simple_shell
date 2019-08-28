#include "holberton.h"
/**
 * *_strcmp - check the code for Holberton School students.
 * @s1: pointer to the source string
 * @s2: Pointer that will take the source value
 * Return: Always dest.
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2 ; ++s1, ++s2)
	if (*s1 == 0)
	{
	return (0);
	}
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
}
