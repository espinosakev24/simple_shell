#include "holberton.h"
/**
 * main - function main - shell
 * @argc: amount of arguments of the main function
 * @argv: double pointer to each argument of the main
 * @envp: double pointer to the enviroment variable
 * Return: 0.
 */
int main(int argc, char **argv, char **envp)
{
	static int main_var = 1;
	char **tokens = malloc(sizeof(char *) * 64);
	char *buffer;
	pid_t pid_fork, child_p;
	(void)argv, (void)argc;

	signal(SIGINT, SIG_IGN);
	buffer = malloc((sizeof(char)) * 32);
	out_memory_check(tokens);
	no_mem_ptr(buffer);
	while (main_var)
	{	buffer = getline_tty(buffer, tokens);
		if (*buffer == '\n')
			continue;
		sw_enter_key(buffer);
		if (_strcmp(buffer, "exit") == 0)
			{	free(tokens);
				free(buffer);
				exit(1); }
		if (_strcmp(buffer, "env") == 0)
		{	print_env();
			continue; }
		pid_fork = fork();
		if (pid_fork == -1)
			check_negative_child(buffer, tokens);
		else if (pid_fork == 0)
		{	tokens = tok_buffer(tokens, buffer);
			if (access(tokens[0], F_OK))
			{	exec_command(tokens, buffer, envp);
				err_execve(buffer, tokens); }
			else
			{ execve(tokens[0], tokens, NULL);
			err_execve(buffer, tokens);
			}}
		else
		{
			wait(&child_p);
		}}
	return (0);
}
