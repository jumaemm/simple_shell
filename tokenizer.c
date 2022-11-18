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
	int count = TOKEN_BUFSIZE;
	int i;

	tokens = malloc(sizeof(char *) * count);
	if (!tokens)
		exit(EXIT_FAILURE);

	token = strtok(argv, delim);
	for (i = 0; token; i++)
	{
		tokens[i] = token;
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;
	return (tokens);
}
