#include <stdio.h>

/**
 * main - prints square
 */
print_square(int size)
{
	int x, i;

	if (size <= 0)
		_putchar('/n');
	else
	{
		for (x = 0; x < size; x++)
		{
		for (i = 0; i < size; i++)
			_putchar(' ');
		_putchar('/n');
		_putchar(92);
		_putchat('/n');
		}
	}
}
