#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest: hello
 * @src: world!
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int len, n;

	n = 0;
	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[n] != '\0')
	{
		dest[len + n] = src[n];
		n++;
	}

	dest[n + len] = '\0';
return (dest);
}
