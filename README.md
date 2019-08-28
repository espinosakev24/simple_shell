# Simple_Shell.
---

[![N|Solid](https://camo.githubusercontent.com/04a8a9a456b8ecafad2eb4f2cff6803cd0194496/687474703a2f2f7777772e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2e706e67)](https://www.holbertonschool.com/co)
---

Here you will find the function that makes similar proccesses of a command interpreter. This repository stores the code of a Simple Shell.

[![N|Solid](https://miro.medium.com/max/1016/1*4nh4ntvCLJjMUDOo1kDtIg.png)]()

## Files
---
| File | Description |
| ---- | ------- |
| _strcat.c |strcat adds the src string to the dest string, overwriting the null termination byte ('\ 0') at the end of dest |
| _strcmp.c | compare character by character, if the strings are equal, a value of 0 will return, if the first string is larger, a positive value will return and if it is smaller, a negative value will return |
| _strcpy.c |Copy the source pointed string (including the null character) to the dest pointed string |
| _strlen.c |Returns the length (number of letters stored) in a text string, not counting the final null character |
| check_path.c |Function that checks and execute PATH |
| get_env.c |Function that tokenizes the env variable |
| getline_tty.c |Function that read a line and checks teletypes |
| print_env.c |Function that print the env variables |
| check_negative_child.c |free buffer and print error |
| err_execve.c |print error, free pointer and exit |
| exe_command.c |function that search a command and executes it |
| free_grid.c |prints a grid of integers |
| min_shell_v1.c |function main - shell |
| no_memory_ptr.c |checks non-memory-ptr |
| out_memory_check.c |function that checks no-memory pointer |
| sw_enter_key.c |function that changes enter key for end of line character |
| tok_buffer.c |function that tokenizes the buffer in strings |
| holberton.h | header file that contains prototypes functions |
| _putchar.c  | function that improves output from a system call to wirte data out of buffer |

## Compilation 
Your shell will be compiled this way _:

```sh 
$gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
Besides that execute it for seein the output at shell

```sh 
$./"nameofexecutable"
```
## Example
holaholahola

## Authors
---

[Liliana Ospina](https://github.com/Liliana327)
[Kevin Espinosa](https://github.com/espinosakev24)

