#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define TOKEN_BUFSIZE 64
extern char **environ;

int parser(char **tokens);
char **tokenizer(char *argv);
char *path_handler(char *command);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
void shell_loop(void);
char *line_handler(void);
#endif
