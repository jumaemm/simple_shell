#include "main.h"

/**
 * tokenizer - splits input string into tokens
 * @argv: input string
 * Return: array of tokens
 */
char **tokenizer(char *argv, ssize_t count)
{
	char *dest = NULL;
	char **tokens;
	char *token;
	char *delim = " \t\n";
	int i;

	dest = malloc(sizeof(char) * count);
	if (dest == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}
	strcpy(dest, argv);
	token = strtok(argv, delim);
	while (token)
	{
		i++;
		token = strtok(NULL, delim);
	}
	i++;
	tokens = malloc(sizeof(char *) * i);
	token = strtok(dest, delim);
	for (i = 0; token; i++)
	{
		tokens[i] = malloc(sizeof(char) * strlen(token));
		strcpy(tokens[i], token);
		token = strtok(NULL, delim);
	}
	free(dest);
	tokens[i] = NULL;
	return (tokens);
}
