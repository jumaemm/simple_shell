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
extern char **environ;

void parser(char **tokens);
char **tokenizer(char *argv, ssize_t count);
char *path_handler(char *command);
#endif
