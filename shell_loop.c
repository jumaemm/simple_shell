#include "main.h"

/**
 * shell_loop - run the main loop of the shell process
 * Return: Always 0
 */
void shell_loop(void)
{
	char *line_input;
	char **argv;
	int status;

	do {
		write(STDOUT_FILENO, "$ ", 4);
		line_input = line_handler();
		argv = tokenizer(line_input);
		status = parser(argv);

		free(line_input);
		free(argv);
	} while (status);
}
