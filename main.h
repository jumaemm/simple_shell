#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
extern char **environ;

void parser(char **tokens);
char **tokenizer(char *argv, ssize_t count);
#endif
