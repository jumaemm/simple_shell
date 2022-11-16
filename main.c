#include "main.h"

/**
 * main - simple shell program
 * @argc: count of args
 * @argv: array of args
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *prompt = "JShell$ ";
	size_t n = 0;
	ssize_t count;
	char *src = NULL;
	/*int i;*/
	char **tokens;
	pid_t pid;

	(void)argc;
	(void)argv;
	while (1)
	{
		src = malloc(sizeof(char) * n);
		if (src == NULL)
			perror("Memory allocation failed");
		printf("%s", prompt);
		count = getline(&src, &n, stdin);
		if (count == -1)
		{
			printf("Exiting...\n");
			return (-1);
		}
		tokens = tokenizer(src, count);
		pid = fork();
		if (pid == -1)
		{
			perror("Error");
			return (-1);
		}
		if (pid == 0)
		{
			parser(tokens);
		}
		else
			wait(NULL);
	}
	free(src);
	return (0);
}
