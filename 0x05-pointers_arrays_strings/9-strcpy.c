#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src.
 * @dest: a buffer yo copy the string to.
 * @src: the source string to copy.
 * Return: A oointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
