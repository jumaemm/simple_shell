#include "main.h"

/**
 * path_handler - locates commands in PATH
 * @command: command to be located
 * Return: full path of the command
 */
char *path_handler(char *command)
{
	char *path, *path_copy, *file_path, *path_token;
	int len_command, len_directory;
	struct stat buff;

	path = getenv("PATH");
	if (path)
	{
		path_copy = strdup(path);
		len_command = strlen(command);
		path_token = strtok(path_copy, ":");
		while (path_token)
		{
			len_directory = strlen(path_token);
			file_path = malloc(len_command + len_directory + 2);
			strcpy(file_path, path_token);
			strcat(file_path, "/");
			strcat(file_path, command);
			strcat(file_path, "\0");
			if (stat(file_path, &buff) == 0)
			{
				free(path_copy);
				return (file_path);
			}
			else
			{
				free(file_path);
				path_token = strtok(NULL, ":");
			}
		}
		free(path_copy);
		if (stat(command, &buff) == 0)
		{
			return (command);
		}
		return (NULL);
	}
	return (NULL);
}
