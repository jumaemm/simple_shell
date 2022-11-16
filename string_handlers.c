#include "main.h"

/**
 * _strlen - return length of string
 * @s: String to be checked
 * Return: Length of s
 */
int _strlen(char *s)
{
	int size;
	int i;

	size = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}
	return (size);
}

/**
 * *_strcpy - copy string from src to destination
 * @src: source string
 * @dest: destination string
 * Return: Destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, size;

	for (size = 0; src[size] != '\0'; size++)
	{
	}

	/*Loop including \\0 char*/
	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: Comparison int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}

	return (j);
}


/**
 * _strcat - concatenate two strings
 * @dest: destination second string
 * @src: first string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
