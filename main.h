#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>
#include <signal.h>
#include <stddef.h>
#include <stdbool.h>

extern char **environ;

int main(void);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
int _strncmp(char *s1, char *s2, size_t n);
char *_strdup(char *str);
char **tokenizer(char *line, char *delim);
char *_getenv(char *token);
void free_ptr(char **ptr);
int t_count(char *ptr, char *delim);
int _forki(char **l_token, char *path);

#endif
