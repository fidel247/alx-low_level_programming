#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 *  and then in uppercase
 *   followed by a new line
 *   Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
