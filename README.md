# Simple Shell project
***
![image](https://user-images.githubusercontent.com/98335124/164543755-7a990b02-209a-4d99-8d7c-9cf427a28595.png)
^ “The Gates of Shell”, by Spencer Cheng, featuring Julien Barbier
***

## Table of Contents
1. ### Requirements for this project
2. ### General-info
3. ### Compilation and Testing
4. ### Files of Shell
5. ### Conclusion
6. ### Collaboration
***

## Requirements for this project
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to [why?](https://www.quora.com/Why-are-system-calls-expensive-in-operating-systems)
***

## General-info
A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts.
The most generic sense of the term shell means any program that users employ to type commands. A shell hides the details of the underlying operating system and manages the technical details of the operating system's application programming interface, which is the level of the operating system that programs running on that operating system use.
### Thompson shell:
The Thompson shell was the first Unix shell, introduced in the first version of Unix in 1971, and was written by Ken Thompson.[1] It was a simple command interpreter, not designed for scripting, but nonetheless introduced several innovative features to the command-line interface and led to the development of the later Unix shells.

![image](https://user-images.githubusercontent.com/98335124/164545241-bab0722a-6250-430f-91bb-92b4134e06c6.png)
***

## Compilation and Testing
### Compilation
Your shell will be compiled this way:

![image](https://user-images.githubusercontent.com/98335124/164557181-cf0fb8bc-7c5e-44f6-961e-d566df28b4a2.png)

### Testing
Your shell should work like this in interactive mode:

![image](https://user-images.githubusercontent.com/98335124/164557290-4f75d801-52ca-4085-8b4f-1a2f94c790f1.png)

But also in non-interactive mode:

![image](https://user-images.githubusercontent.com/98335124/164557346-67d2c0f5-c5fc-4281-a98a-e97a6dbb0b95.png)

***

## Files of Shell

| File | Description |
| ----- | ----- |
| [AUTHORS](https://github.com/David-VargasV/simple_shell/blob/master/AUTHORS) | Authors if this project |
| [_getenv.c](https://github.com/David-VargasV/simple_shell/blob/master/_getenv.c) | Description |
| [free_ptr.c](https://github.com/David-VargasV/simple_shell/blob/master/free_ptr.c) | Description|
| [main.h](https://github.com/David-VargasV/simple_shell/blob/master/main.h) | Description |
| [man_1_simple_shell](https://github.com/David-VargasV/simple_shell/blob/master/man_1_simple_shell) | Description |
| [prompt.c](https://github.com/David-VargasV/simple_shell/blob/master/prompt.c) | Description |
| [put.c](https://github.com/David-VargasV/simple_shell/blob/master/put.c) | Description |
| [strings.c](https://github.com/David-VargasV/simple_shell/blob/master/strings.c) | Description |
| [strings2.c](https://github.com/David-VargasV/simple_shell/blob/master/strings2.c) | Description |
| [tokenizer.c](https://github.com/David-VargasV/simple_shell/blob/master/tokenizer.c) | Description |
| [_fork.c](https://github.com/David-VargasV/simple_shell/blob/master/_fork.c) | Description |

***

## Conclusion
In general terms, a shell corresponds in the computer world to a command interpreter where the user has an available interface (CLI, Command-Line Interface), through which he has the possibility of accessing services of the operating system as well as executing or invoking programs.
***

## Collaboration
* Leonardo Berrío Rendon - 4589@holbertonschool.com
* Jhoan David Vargas Velandia - 4523@holbertonschool.com

### for Holberton School
