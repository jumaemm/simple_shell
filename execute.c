#include "main.h"

/**
 * parser - takes input array of tokens and executes a command
 * @tokens: input array of tokens
 * Return: Always 0
 */
int parser(char **tokens)
{
	char *command = NULL, *path_command = NULL;
	pid_t pid;
	/*int status;*/

	if (tokens)
	{
		command = tokens[0];
		path_command = path_handler(command);
		if (path_command == NULL)
		{
			perror("Command does not exist");
			return (0);
		}

		pid = fork();
		if (pid == -1)
		{
			perror("Error: ");
			return (0);
		}
		if (pid == 0)
		{
			if (execve(path_command, tokens, NULL) == -1)
			{
				perror("Error: ");
				return (0);
			}
		}
		else
		{
		/*	do {
		*		waitpid(pid, &status, WUNTRACED);
		*	} while (!WIFEXITED(status) && !WIFSIGNALED(status));
		*/
			wait(NULL);
		}
	}
	return (1);
}
