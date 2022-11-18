#include "main.h"

/**
 * tokenizer - splits input string into tokens
 * @argv: input string
 * Return: array of tokens
 */
char **tokenizer(char *argv)
{
	char **tokens;
	char *token;
	char *delim = " \t\r\a\n";
	size_t bufsize = TOKEN_BUFSIZE;
	size_t i = 0;

	tokens = malloc(sizeof(char *) * (bufsize));
	if (!tokens)
		exit(EXIT_FAILURE);

	token = strtok(argv, delim);
	while (token)
	{
		tokens[i] = token;
		i++;
		if (i >= bufsize)
		{
			bufsize += TOKEN_BUFSIZE;
			tokens = realloc(tokens, (sizeof(char *) * (bufsize)));
			if (!tokens)
			{
				perror("Allocation ERROR");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	return (tokens);
}
