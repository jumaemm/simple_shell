#include "main.h"

/**
 * main - simple shell program
 * @argc: count of args
 * @argv: array of args
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	shell_loop();
	return (0);
}
