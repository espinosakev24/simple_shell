#include "holberton.h"
int env_size(char **environ)
{
	int n = 0;

	while (environ[n])
	{
		n++;
	}
	return (n);
}
