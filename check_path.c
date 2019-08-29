#include "holberton.h"
/**
 * check_path - function that checks and execute PATH
 * @paths: PATH variable tokenized.
 * @command: command that will be linked with the path
 * @tokens: input tokenized
 * @environ: double pointer to the environ variable
 * Return: path if exists
 */
char *check_path(char **paths, char *command, char **tokens, char **environ)
{
	int a = 0;

	while (paths[a])
	{
		_strcat(paths[a], "/");
		_strcat(paths[a], command);
		if (access(paths[a], F_OK) == 0)
		{
			execve(paths[a], tokens, environ);
			return (paths[a]);
		}
		a++;
	}
	return (NULL);
}
