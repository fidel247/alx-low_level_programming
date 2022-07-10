#include <stdio.h>

/**
 * main - prints square
 */
print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('/n');
	else
	{
		for (x = 0; x < size; x++)
		{
		for (j = 0; y < size; y++)
		{
			_putchar(35);
		}
		_putchar('/n');
		}
	}
}
