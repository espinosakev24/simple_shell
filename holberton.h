#ifndef HOLBERTON
#define HOLBERTON
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <signal.h>
#include "holberton.h"
int env_size(char **environ);
char *_memset(char *s, char b, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *getline_tty(char *buffer, char **tokens);
int check_negative_child(char *buffer, char **tokens);
void exec_command(char **tokens, char *buffer);
char *sw_enter_key(char *buffer);
char **main_print_env(char **tokens);
char **tok_buffer(char **tokens, char *buffer);
int print_env(void);
void err_execve(char *buffer, char **tokens);
/* FREES FUNCTIONS */
char **out_memory_check(char **ptr);
void free_grid(char **grid);
char *no_mem_ptr(char *ptr);
char **out_memory_check(char **ptr);
/*------------------*/
char *check_path(char **paths, char *command, char **tokens);
char *_strcat(char *dest, char *src);
extern char **environ;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char **get_env(char *PATH);
#endif
