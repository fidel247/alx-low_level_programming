#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: the string to get the length of.
 * Return: the length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
