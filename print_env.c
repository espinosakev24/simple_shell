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
		write(1, environ[n], _strlen(environ[n]));
		write(1, "\n", 1);
		n++;
	}
}
