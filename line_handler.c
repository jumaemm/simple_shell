#include "main.h"

/**
 * line_handler - handle the input string from user
 * Return: char array of input line
 */
char *line_handler(void)
{
	char *input_line;
	size_t bufsize = 0;
	int status = getline(&input_line, &bufsize, stdin);

	if (status == -1)
	{
		exit(EXIT_SUCCESS);
	}
	return (input_line);
}
