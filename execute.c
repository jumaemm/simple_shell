#include "main.h"

/**
 * parser - takes input array of tokens and executes a command
 * @tokens: input array of tokens
 * Return: Always 0
 */
void parser(char **tokens)
{
	char *command = NULL, *path_command = NULL;

	if (tokens)
	{
		command = tokens[0];
		path_command = path_handler(command);

		if (execve(path_command, tokens, NULL) == -1)
		{
			perror("Error: ");
		}
	}
}
