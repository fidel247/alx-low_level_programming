#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *  followed by a new line
 *  Return: always 0
 */
int main(void)
{
	char word;

	for (word =  'a'; word <= 'z'; word++)
	{
		if (word != 'e' && word != 'q')
			putchar(word);
	}
		putchar('\n');
		return (0);

}
