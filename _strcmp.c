#include "holberton.h"
/**
 * _strcmp - function that compares if two strings are equals
 * @s1: string that will be pasted
 * @s2: string that will be copied
 * Return: -1 if fails and 1 if doesn't
 */
int _strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
	{
		return (0);
	}
	for (; *s1 == *s2; ++s1, ++s2)
	if (*s1 == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -1 : 1);
}
