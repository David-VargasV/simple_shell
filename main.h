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
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncmp(char *s1, char *s2, size_t n);
char *_strdup(char *str);
void _puts(char *str);
int _putchar(char c);
char **tokenizer(char *line, char *delim);
char *_getenv(char *token);
char **_env(char **l_token);
void free_ptr(char **ptr);
int _count(char *ptr);
int _forki(char *line, char **l_token, char *path);

#endif
