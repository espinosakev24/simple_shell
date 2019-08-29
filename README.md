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
| _calloc.c |prints buffer in hexa |
| _puts.c |check the code for Holberton School students |
| env_size.c |function that calculates the len of environ |
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
$./"./hsh"
```

## Testing

This shell should work like this in interactive mode:
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```
## Error output

Example of error with **_hsh_**:

```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## Example

root@vagrant-ubuntu-trusty-64:~/simple_shell# ./hsh
#cisfun$ ls-la
./hsh: 1: ls-la: not found
#cisfun$ ls -l
total 84 \
-rw-r--r-- 1 root root   173 Aug 28 21:02 AUTHORS\
-rw-r--r-- 1 root root  2604 Aug 28 21:50 README.md\
-rw-r--r-- 1 root root  1768 Aug 28 21:02 auxiliary_functions.c\
-rw-r--r-- 1 root root  1085 Aug 28 21:02 builtins.c\
-rw-r--r-- 1 root root   390 Aug 28 21:02 environment.c\
-rw-r--r-- 1 root root   394 Aug 28 21:02 execute.c\
-rw-r--r-- 1 root root   871 Aug 28 21:02 holberton.h\
-rwxr-xr-x 1 root root 18763 Aug 28 21:03 hsh\
-rw-r--r-- 1 root root  2157 Aug 28 21:02 man_1_simple_shell\
-rw-r--r-- 1 root root   471 Aug 28 21:02 parse_line.c\
-rw-r--r-- 1 root root   461 Aug 28 21:02 parse_line2.c\
-rw-r--r-- 1 root root   828 Aug 28 21:02 path.c\
-rw-r--r-- 1 root root  1875 Aug 28 21:02 printing_functions.c\
-rw-r--r-- 1 root root   339 Aug 28 21:22 read_line.c\
-rw-r--r-- 1 root root   666 Aug 28 21:02 run.c\
-rw-r--r-- 1 root root   867 Aug 28 21:02 shell.c\
-rw-r--r-- 1 root root   659 Aug 28 21:22 tmp_file_12345\
```
```

### List of allowed functions and system calls

* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)

## Authors
---
[Liliana Ospina](https://github.com/Liliana327) | [Kevin Espinosa](https://github.com/espinosakev24)
