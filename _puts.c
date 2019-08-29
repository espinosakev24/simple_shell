#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: pointer to a string
 * Return: Always void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
