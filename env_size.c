#include "holberton.h"
/**
 * env_size - function that calculates the len of environ
 * @environ: environ variable.
 * Return: the len of environ
 */
int env_size(char **environ)
{
	int n = 0;

	while (environ[n])
	{
		n++;
	}
	return (n);
}
