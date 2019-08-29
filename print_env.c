#include "holberton.h"
/**
 * print_env - function that prints the env variable
 * Return: void function
 */
void print_env(void)
{
	int n = 0;

	while (environ[n])
	{
		_puts(environ[n]);
		n++;
	}
}
